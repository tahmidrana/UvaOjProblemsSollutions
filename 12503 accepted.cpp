#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,p,x,res;
    int dir[110];
    char s[20];
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        res = 0;
        for(int i=1 ; i<=n ; i++){
            scanf("%s",s);
            if(strcmp(s,"LEFT")==0){
                res--;
                dir[i] = -1;
            }
            else if(strcmp(s,"RIGHT")==0){
                res++;
                dir[i] = 1;
            }
            else{
                scanf("%s %d",s,&x);
                res += dir[x];
                dir[i] = dir[x];
            }
        }
        printf("%d\n",res);
    }
    return 0;
}
