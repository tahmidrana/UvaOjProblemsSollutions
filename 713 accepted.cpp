/*
accepted
*/
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
    for(int i=a.size()-1,j=b.size()-1; i>=0 || j>=0 ; i--,j--){
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
    string x,y,res,total,ans;
    int N,final,final1,res_len,count;
    cin>>N;
    for(int i=0;i<N;i++){
        count=0;

        cin>>x>>y;
        x=reverse(x);
        y=reverse(y);
        res=add(x,y);
        total=reverse(res);
        res_len=total.size();

        for(int j=0;j<res_len;j++){
            if(total[j]!='0')
                break;
            count++;
        }
        for(int k=count; k<res_len; k++){
            cout<<total[k];
        }
        cout<<endl;
    }
    return 0;
}
