#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,l;
    string s;
    while(cin>>n){
        if(n==0)
            break;
        cin>>s;
        l=s.size()/n;
        for(int i=0 ; i<n ; i++){
            for(int j=l*(i+1)-1 ; j>=l*i ; j--)
                cout<<s[j];
        }
        cout<<endl;
    }
    return 0;
}
