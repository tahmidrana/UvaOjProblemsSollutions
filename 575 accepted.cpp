#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string a;
    int r;
    int res;
    while(cin>>a){
        if(a[0]==48)
        break;
            res=0;
        int len=a.size();
        for(int i=len-1;i>=0;i--){
            r=a[i]-'0';
            res=res+(r*(pow(2,len-i)-1));
        }
        cout<<res<<endl;
    }
    return 0;
}
