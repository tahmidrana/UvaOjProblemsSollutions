/*****************************
    *   10302
    *   Sum of Polynomials
    *   accepted
******************************/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long i,n,x;
    while(cin>>x){
        n=0;
        for(i=1;i<=x;i++)
            n=n+(i*i*i);
    cout<< n << endl;
    }
    return 0;
}
