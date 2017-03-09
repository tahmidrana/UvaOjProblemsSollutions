#include <iostream>
#include <cstdio>
#define N 3000
int ar[4000][4000];

void Fac(){
    ar[0][1]=1;
    ar[1][1]=1;
    ar[2][1]=2;
    for(int i=3 ; i<=N ; i++){
        for(int j=1 ; j<=N ; j++){
            ar[i][j]=ar[i][j]+(i*ar[i-1][j]);
            if(ar[i][j]>9){
                ar[i][j+1]=ar[i][j]/10;
                ar[i][j]%=10;
            }
        }
    }
}
int main()
{
    int n,m;
    long long res;
    Fac();
    while(~scanf("%lld",&n)){
        res=0;
        for(int i=1 ; i<3000 ; i++){
            res+=ar[n][i];
        }
        printf("%lld\n",res);
    }

    return 0;
}
