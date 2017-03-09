#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1[100],s2[100],s3;
    int n,q;
    while(cin>>n){
        getchar();
        for(int i=0 ; i<n ; i++){
            getline(cin,s1[i]);
            getline(cin,s2[i]);
        }

        cin>>q;
        getchar();
        while(q--){
            getline(cin,s3);
            for(int i=0 ; i<n ; i++){
                if(s1[i]==s3){
                    cout<<s2[i] <<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
