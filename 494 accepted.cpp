#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int l,count,ar[300];
    while(getline(cin,s)){
        memset(ar,0,sizeof(ar));
        l = s.size();
        count = 0;
        for(int i=0 ; i<l ; i++){
            if((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122))
                ar[i] = 1;
        }
        for(int i=0 ; i<l-1 ; i++){
            //cout<<ar[i];
            if(ar[i]==ar[i+1])
                ar[i] = 0;
        }
        for(int i=0 ; i<l ; i++){
            //cout<<ar[i];
            if(ar[i]==1)
                count++;
        }
        cout<<count <<endl;
    }
    return 0;
}
