#include <iostream>
#include <cstdio>
using std::cin;
using std::cout;
using std::endl;
#define ll long long

ll counter(ll n){
    ll c,x;
    if(n==1){
        c=1;
        x=4;
    }
    else{
        c=0;
        x=n;
    }
    while(x>1){
        if(x%2==0)
            x/=2;
        else
            x=(3*x)+1;
        c++;
    }
    return c;
}

int main()
{
    ll a,b,max,indx,tmp;
    while(cin>>a>>b && a!=0 && b!=0){
        if(a>b){
            tmp=a;
            a=b;
            b=tmp;
        }
        max=0;
        for(int i=a ; i<=b ; i++){
            if(counter(i)>max){
                max = counter(i);
                indx = i;
            }
            //cout<<i <<"  "<<counter(i) <<endl;
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,indx,max);
    }
    return 0;
}
