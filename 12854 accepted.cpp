#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[6],b[6];
    bool flag;
    while(~scanf("%d",&a[0])){
        for(int i=1 ; i<5 ; i++)
            scanf("%d",&a[i]);
        for(int i=0 ; i<5 ; i++)
            scanf("%d",&b[i]);
        for(int i=0 ; i<5 ; i++){
            if(a[i]!=b[i])
                flag = true;
            else{
                flag = false;
                break;
            }
        }
        if(flag)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
