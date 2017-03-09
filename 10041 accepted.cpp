#include <iostream>
using namespace std;
int main()
{
    int a[505],r,n,temp,res=0,j;
    cin>>r;
    for(int x=0;x<r;x++){
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
    for(int i=0;i<n;i++){
        res+=(a[i]-a[i/2]);
    }
    cout<<res <<endl;
    }
    return 0;
}
