#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector <int> v;
    int i=0,n,mid,p;
    while(cin>>n){
        v.push_back(n);
        sort(v.begin(),v.end());
        p=i/2;
        if(i%2==0)
            cout<<v[p] <<endl;
        else{
            mid=(v[i/2]+v[i/2+1])/2;
            cout<<mid <<endl;
        }
        i++;

    }
    return 0;
}
