#include <iostream>
#include <string>
using namespace std;
string reverse(string str)
{
    int len=str.size();
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
            sum=carry+b[j]-'0';
        else if(j<0)
            sum=carry+a[i]-'0';
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
    string a,b;
    int N,M;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>M;
        string x,y;
        for(int j=0;j<M;j++){
            cin>>a>>b;
            x+=a;
            y+=b;
        }
        cout<<add(x,y)<<endl;
        if(i<N-1)
            cout<<endl;
    }
    return 0;
}
