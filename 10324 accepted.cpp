#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int a,b,n;
    vector <int> ar;
    int cs=0;
    while(cin>>s){
        for(int i=0 ; i<s.size() ; i++)
            ar.push_back(0);
        cs++;
        scanf("%d",&n);
        cout<<"Case "<<cs <<":"<<endl;
        for(int i=1 ; i<s.size() ; i++){
            if(s[i]==s[i-1])
                ar[i]=ar[i-1];
            else
                ar[i] = ar[i-1]+1;
        }
        for(int i=0 ; i<n ; i++){
            scanf("%d %d",&a,&b);

            if(ar[a]==ar[b])
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
