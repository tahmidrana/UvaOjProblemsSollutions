#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int n,s,v,r;
    vector <int> ar,res;
    while(cin>>n){
        for(int i=0 ; i<n ; i++){
            cin>>v;
            ar.push_back(v);
        }
        for(int i=0 ; i<n-1 ; i++){
            r=abs(ar[i]-ar[i+1]);
            res.push_back(r);
        }
        sort(res.begin(),res.end());
        for(int i=0 ; i<n-1 ; i++){
            if((res[i]!=res[i+1]) && (res[i]>0 && res[i]<n) ){
                s=1;
                //break;
            }
            else{
                s=0;
                break;
            }
        }
        if(s==1 || n==1)
            cout<<"Jolly" <<endl;
        else
            cout<<"Not jolly" <<endl;
        ar.clear();
        res.clear();
    }
    return 0;
}
