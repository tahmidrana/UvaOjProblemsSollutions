#include <iostream>
using namespace std;
int main()
{
    int t,n,k,p,res;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        res=0;
        cin >> n >> k >> p;
        cout<<"Case "  << i+1 << ": " << ((k-1+p)%n)+1 <<endl;
    }
    return 0;
}
