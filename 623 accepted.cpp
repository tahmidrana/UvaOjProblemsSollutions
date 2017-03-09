#include <iostream>
#include <cstdio>
#define N 2600
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
    Fac();
    while(~scanf("%d",&n)){
        printf("%d!\n",n);
        for(int i=2600 ; i>=0 ; i--){
            if(ar[n][i]!=0){
                m=i;
                break;
            }
        }
        for(int i=m ; i>=1 ; i--)
            printf("%d",ar[n][i]);
        printf("\n");
    }
    return 0;
}
