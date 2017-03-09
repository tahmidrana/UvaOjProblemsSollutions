#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag;
    string s;
    while(getline(cin,s)){
        if(s=="*")
            break;
        flag = true;
        for(int i=0 ; i<s.size() ; i++){
            if(s[i]==32){
                if((s[i+1]==s[0]) || (s[i+1]==char(s[0]-32)) || (s[i+1]==char(s[0]+32)))
                    flag = true;
                else{
                    flag = false;
                    break;
                }
            }
            //else cout<<islower(s[i]);
        }

        if(flag)
            cout<<"Y" <<endl;
        else
            cout<<"N" <<endl;

    }
    return 0;
}
