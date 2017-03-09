/************************
    *   10235
    *   simply emirp
*************************/
#include <iostream>
#include <cmath>
using namespace std;
long long int is_prime(long long int n)
{
    long long int i;
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    for(i=3;i<=sqrt(n);i=i+2){
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int N,i,x,a,r;
    while(cin>>N){
        r=0;
        x=N;
    while(x>=1){
        a=x%10;
        r=r*10+a;
        x=x/10;
    }
    if(0==is_prime(N))
        cout<<N <<" is not prime." <<endl;
    if(r==N){
        if(1==is_prime(N))
            cout<<N <<" is prime."<< endl;
    }
    if(r!=N){
    if(1==is_prime(r) && 1==is_prime(N))
        cout<<N <<" is emirp."<<endl;

    if(1==is_prime(N) && 0==is_prime(r))
        cout<<N <<" is prime."<< endl;
    }
    }
    return 0;
}
