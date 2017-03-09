#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double res;
    int t,n;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        res=0.0;
        cin>>n;
        for(int j=1 ; j<=n ; j++){
            res+=log10(j);
        }
        cout<<int(res)+1<<endl;
    }
    return 0;
}
