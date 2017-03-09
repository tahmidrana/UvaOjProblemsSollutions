#include <iostream>
#include <cstdio>
using namespace std;

int cycle(long long int n){
    int count=1;
    while(n>1){
        if(n%2!=0)
            n=3*n+1;
        else
            n=n/2;
        count++;
    }
    return count;
}

int main()
{
    long long a,b,n,x,y,max,i;

    while(~scanf("%lld %lld",&a,&b)){

        if(a<b){
            x=a;
            y=b;
        }
        else{
            x=b;
            y=a;
        }
        max=1;
        for(i=x ; i<=y ; i++){
                n=cycle(i);
            if(n>max)
                max=n;
        }
        //cout<<a <<" "<<b <<" "<<max <<endl;
        printf("%lld %lld %lld\n",a,b,max);
    }

    return 0;
}
