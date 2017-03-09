#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,l1;
    while(getline(cin,s)){
        l = s.size();
        l1 = 0;
        for(int i=0 ; i<=l ; i++){
            if(s[i]==32 || s[i]=='\0'){
                for(int j=i-1 ; j>=l1 ; j--){
                    cout<<s[j] ;
                }
                l1 = i+1;
                if(i<l)
                    cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
