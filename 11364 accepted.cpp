/*********************
    *   11364
    *   parking
**********************/
#include <iostream>
using namespace std;
int main()
{
    int a[505],t,n,temp,res=0,j;
    cin>>t;
    for(int x=0;x<t;x++){
            res=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int len=n-1;
        for(int i=0;i<len;i++){
            for(j=0;j<len-i;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
        }
    for(int i=0;i<len;i++){
        res+=(a[i+1]-a[i]);
    }
    cout<<res*2 <<endl;
    }
    return 0;
}
