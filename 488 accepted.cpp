#include <iostream>
using namespace std;
int main()
{
    int n,t,x;
    cin>>t;
    //cout<<endl;
    for(int c=0 ; c<t ; c++){
        cin>>n>>x;

        for(int d=0 ; d<x ; d++){
            for(int i=1 ; i<=n ; i++){
                for(int k=i ; k>=1 ; k--)
                    cout<<i;
                cout<<endl;
            }
            for(int i=n-1 ; i>=1 ; i--){
                for(int k=i ; k>=1 ; k--)
                    cout<<i;
                cout<<endl;
            }
            if(c!=t-1 || d!=x-1)
                cout<<endl;
        }
    }
    return 0;
}
