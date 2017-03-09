#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,A,k;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
        k = (a+b+c)/2.0;
        A = sqrt(k*(k-a)*(k-b)*(k-c))/k;
        if(a==0 && b==0 && c==0)
            printf("The radius of the round table is: 0.000\n");
        else
            printf("The radius of the round table is: %0.3lf\n",A);
    }
    return 0;
}
