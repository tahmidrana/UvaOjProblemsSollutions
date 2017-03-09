#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,m,k,v[150],len;
    char ch[150],line[10050];
    double cent;
    cin>>n;
    while(n--){
        cin>>k;
        cent = 0;
        for(int i=0 ; i<k ; i++)
            cin>>ch[i]>>v[i];
        cin>>m;
        getchar();
        for(int c=0 ; c<m ; c++){
            gets(line);
            len = strlen(line);
            for(int i=0 ; i<k ; i++){
                for(int j=0 ; j<len ; j++){
                    if(ch[i]==line[j])
                        cent += v[i];
                }
            }
        }
        printf("%0.2lf$\n",cent/100);
    }
    return 0;
}
