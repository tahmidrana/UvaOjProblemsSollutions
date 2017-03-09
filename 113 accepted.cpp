#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,k,p;
    while(~scanf("%lf %lf",&n,&p)){
        k = pow(p,1/n);
        printf("%0.0lf\n",k);
    }
    return 0;
}
