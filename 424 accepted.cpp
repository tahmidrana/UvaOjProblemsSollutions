#include <iostream>
#include <string>
using namespace std;
string reverse(string str)
{
    int len=str.size(),i;
    string x;
    for(int i=len-1;i>=0;i--){
        x+=str[i];
    }
    return x;
}
string add(string a,string b)
{
    string ans,x;
    int sum,carry=0;
    for(int i=a.size()-1,j=b.size()-1 ; i>=0 || j>=0 ; i--,j--){
        if(i<0)
            sum=carry+(b[j]-'0');
        else if(j<0)
            sum=carry+(a[i]-'0');
        else
            sum=carry+(a[i]-'0')+(b[j]-'0');

        carry=sum/10;
        ans+=(sum%10)+'0';
    }
    if(carry)
        ans+='1';

    x=reverse(ans);
    return x;
}
int main()
{
    string x,y;
    while(1){
        cin>>x;
        y=add(x,y);
        add(x,y);
        if(x=="0")
            break;

    }
    cout<<add(x,y) <<endl;
    return 0;
}
