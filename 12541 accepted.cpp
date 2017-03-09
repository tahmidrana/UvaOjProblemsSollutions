#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[110];
    int t,d,m,y,days,mx_p,mn_p,mx=-2147483646,mn=2147483647;
    cin>>t;
    for(int i=0 ; i<t ; i++){
        cin>>s[i];
        cin>>d>>m>>y;
        days = d+(m*30)+(y*365);
        if(days>mx){
            mx = days;
            mx_p = i;
        }
        if(days<mn){
            mn = days;
            mn_p = i;
        }
        //cout<<days <<endl;
    }
    //cout<<mn <<endl <<mx;
    cout<<s[mx_p] <<endl <<s[mn_p] <<endl;
    return 0;
}
