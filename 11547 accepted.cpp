/*************************
    *   11547
    *   automatic answer
**************************/
#include <bits/stdc++.h>

int main()
{
    long long t,n,x,mod;
    scanf("%lld",&t);
    for(int i=0;i<t;i++){
        scanf("%lld",&n);
        x=(((((n*567)/9)+7492)*235)/47)-498;
        if(x<0)
            x=x*(-1);
        for(int j=0;j<2;j++){
            mod=x%10;
            x=x/10;
        }
        printf("%lld\n",mod);
    }
    return 0;
}
