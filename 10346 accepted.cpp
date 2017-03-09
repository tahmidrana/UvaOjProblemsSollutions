#include <iostream>
using namespace std;
int main()
{
    int n,k,b,res;
    while(cin>>n>>k){
        res=n;
        while(n>=k){
            b=n%k;
            n=n/k;
            res+=n;
            n+=b;
        }
        cout<<res <<endl;
    }
    return 0;
}
