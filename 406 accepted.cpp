#include <iostream>
#include <cmath>
#define N 1010
using namespace std;

int status[N];
int prime[N];

void Sieve(){
    status[1]=0;
    status[2]=0;
    for(int i=4 ; i<=N ; i+=2)
        status[i]=1;
    for(int i=3 ; i*i<=N ; i+=2){
        if(status[i]==0){
            for(int j=i*i ; j<=N ; j+=i+i)
                status[j]=1;
        }
    }
    int p=0;
    for(int i=1 ; i<=N ; i++){
        if(status[i]==0){
            prime[p]=i;
            p++;
        }
    }
}

int main()
{
    int n,c,count,mid;
    Sieve();

    while(cin>>n>>c){
        cout<<n <<" " <<c <<": ";
        count=0;
        for(int i=0 ; prime[i]<=n ; i++)
            count++;

        if(count%2==0)
            c=c*2;
        else
            c=(c*2)-1;
        mid=(count-c)/2;
        if(c>=count){
            cout<<prime[0];
            for(int i=1 ; prime[i]<=n ; i++){
                if(prime[i-1]<prime[i])
                    cout<<" ";
                cout<<prime[i];
            }
        }
        else{
            cout<<prime[mid];
            for(int i=mid+1 ; i<mid+c ; i++){
                if(prime[i-1]<prime[i])
                    cout<<" ";
                cout<<prime[i];
            }
        }
        cout<<endl;
        cout<<endl;

    }

    return 0;
}
