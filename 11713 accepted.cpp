#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag;
    int n;
    string s1,s2;
    cin>>n;
    while(n--){
        cin>>s1>>s2;
        if(s1.size()==s2.size()){
            for(int i=0 ; i<s1.size() ; i++){
                if(s1[i]!=s2[i]){
                    if((s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u') && (s2[i]=='a' || s2[i]=='e' || s2[i]=='i' || s2[i]=='o' || s2[i]=='u'))
                        flag = true;
                    else{
                        flag = false;
                        break;
                    }
                }
                else if(s1[i]==s2[i])
                    flag = true;
                else{
                    flag = false;
                    break;
                }
            }
        }
        else
            flag = false;
        if(flag)
            cout<<"Yes" <<endl;
        else
            cout<<"No" <<endl;

    }
    return 0;
}
