#include <bits/stdc++.h>
using namespace std;

int numConvert(string s){
    int res = 0;
    for(int i=0 ; i<s.size() ; i++){
        res = res*10+s[i]-'0';
    }
    return res;
}

int main()
{
    int count = 0,n1,n2;
    char op,eq;
    string res;
    while(cin>>n1>>op>>n2>>eq>>res){
        if(res!="?"){
            int n3 = numConvert(res);
            if(op=='+' && n1+n2==n3)
                count++;
            if(op=='-' && n1-n2==n3)
                count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
