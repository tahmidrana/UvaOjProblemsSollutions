#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,r;
    while(~scanf("%lld",&n)){
        n = (n/2)+1;
        r = 2*(n*(n+1)-n)-1;
        //cout<<r <<endl;
        printf("%lld\n",(3*r)-6);
    }
    return 0;
}
