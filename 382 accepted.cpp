#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[101],count=0,res,len[101];
    for(int i=0;i<=101;i++){
            res=0;
        cin>>a[i];
        count++;
        len[i]=log10(a[i])+1;
        if(a[i]==0)
            break;
    }
    cout<<"PERFECTION OUTPUT"<<endl;
    for(int i=0;i<count-1;i++){
        res=0;
        for(int j=1;j<a[i];j++){
        if(a[i]%j==0)
            res=res+j;
        }
        if(res==a[i]){
            for(int k=0;k<5-len[i];k++)
                cout<<" ";
        cout<<a[i] <<"  PERFECT"<<endl;
        }
        if(res<a[i]){
            for(int k=0;k<5-len[i];k++)
                cout<<" ";
        cout<<a[i] <<"  DEFICIENT"<<endl;
        }
        if(res>a[i]){
            for(int k=0;k<5-len[i];k++)
                cout<<" ";
        cout<<a[i] <<"  ABUNDANT"<<endl;
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
