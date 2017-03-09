#include <iostream>
#define N 6000
using namespace std;

int ar[N][N];

void Fib(){
    ar[0][0]=1;
    ar[1][0]=1;
    ar[2][0]=2;
    for(long long i = 3 ; i < N ; i++){
        for(long long j = 0 ; j < N ; j++){
            ar[i][j]=ar[i][j]+ar[i-1][j]+ar[i-2][j];
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
    Fib();
    while(cin>>n){
            if(n==0)
                break;
            n=2*n-1;
        for(long long i=N-1 ; i>=0 ; i--){
            if(ar[n][i]!=0){
                m=i;
                break;
            }
        }
        for(long long i=m ; i>=0 ; i--)
            cout<<ar[n][i];
        cout<<endl;
    }
    return 0;
}
