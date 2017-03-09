#include <bits/stdc++.h>
using namespace std;
#define N 1000005
int status[N];
int prime[N];

void sieve(){
    status[0]=1;
    status[1]=1;
    status[2]=0;
    for(int i=4 ; i<=N ; i+=2)
        status[i]=1;
    for(int i=3 ; i*i<=N ; i+=2){
        if(status[i]==0){
            for(int j=i*i ; j<=N ; j+=i+i)
                status[j]=1;
        }
    }
    int p = 0;
    for(int i=0 ; i<=N ; i++){
        if(status[i]==0){
            prime[p] = i;
            p++;
        }
    }
}

int main()
{
    int t,a,b,r,p,q,m,x,count,res[144];
    cin>>t;
    sieve();
    while(t--){
        for(int j=0 ; j<=144 ; j++)
            res[j] = 0;
        cin>>a>>b;

        for(int j=0 ; j<N ; j++){
            if(prime[j]>=a){
                p = j;
                break;
            }
        }

        for(int j=0 ; j<N ; j++){
            if(prime[j]>b){
                q = j-1;
                break;
            }
            else if(prime[j]==b){
                q = j;
                break;
            }
        }
        for(int j=p+1 ; j<=q ; j++){
                r = prime[j]-prime[j-1];
                res[r]++;
        }
        m = res[0];
        for(int j=0 ; j<120 ; j++){
            if(res[j]>m){
                m = res[j];
                x = j;
            }
        }
        count = 0;
        for(int j=0 ; j<120 ; j++){
            if(res[j]==m){
                count++;
            }
            if(count>=2)
                break;
        }

        if(count>=2)
            cout<<"No jumping champion" <<endl;
        else
            cout<<"The jumping champion is " <<x <<endl;
    }
    return 0;
}
