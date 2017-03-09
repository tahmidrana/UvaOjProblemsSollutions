#include <iostream>
using namespace std;
#define N 10000010
int status[N];

void Sieve(){
    status[2]=0;
    for(int i=3 ; i<=N ; i+=2)
        status[i]=0;
    for(int i=4 ; i<=N ; i+=2)
        status[i]=1;
    for(int i=3 ; i*i<=N ; i+=2){
        for(int j=i*i ; j<=N ; j+=i+i){
            if(status[j]==0)
                status[j]=1;
        }
    }
}

int isPalidrome(int n){
    int x=n;
    int mod,res=0;
    while(x>0){
        mod=x%10;
        x=x/10;
        res=(res*10)+mod;
    }
    if(n==res)
        return true;
    else
        return false;
}

int main(){
    int n;
    Sieve();
    while(cin>>n){
        cout<<n*2 <<endl;
        if(isPalidrome(n) && status[n]==0)
            break;
    }
    return 0;
}
