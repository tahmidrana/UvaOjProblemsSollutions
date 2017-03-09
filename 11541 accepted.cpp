#include <iostream>
using namespace std;
int main()
{
    string s;
    int n,x;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>s;
        x = 0;
        cout<<"Case " <<i <<": ";
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]>=48 && s[i]<=57)
                x = s[i]-'0';
            if((s[i]>=48 && s[i]<=57) && (s[i+1]>=48 && s[i+1]<=57)){
                x =s[i]-'0';
                x = x*10 + (s[i+1]-'0');
            }
            if((s[i]>=48 && s[i]<=57) && (s[i+1]>=48 && s[i+1]<=57) && (s[i+2]>=48 && s[i+2]<=57)){
                x = s[i]-'0';
                x = x*10 + (s[i+1]-'0');
                x = x*10 + (s[i+2]-'0');
            }
            for(int j=0 ; j<x ; j++){
                if(s[i-1]>=65 && s[i-1]<=90)
                cout<<s[i-1];
            }
        }
        cout<<endl;
    }
    return 0;
}
