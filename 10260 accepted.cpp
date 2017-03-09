#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a[25],b[25],l;
    while(cin>>s){
        memset(a, 0, sizeof a);
        memset(b, 0, sizeof b);
        l = s.size();
        for(int i=0 ; i<l ; i++){
            if(s[i]=='B' || s[i]=='F' || s[i]=='P' || s[i]=='V' || s[i]=='b' || s[i]=='f' || s[i]=='p' || s[i]=='v')
                a[i] = 1;
            if(s[i]=='C' || s[i]=='G' || s[i]=='J' || s[i]=='K' || s[i]=='Q' || s[i]=='S' || s[i]=='X' || s[i]=='Z')
                a[i] = 2;
            if(s[i]=='c' || s[i]=='g' || s[i]=='j' || s[i]=='k' || s[i]=='q' || s[i]=='s' || s[i]=='x' || s[i]=='z')
                a[i] = 2;
            if(s[i]=='D' || s[i]=='T' || s[i]=='d' || s[i]=='t')
                a[i] = 3;
            if(s[i]=='L' || s[i]=='l')
                a[i] = 4;
            if(s[i]=='M' || s[i]=='N' || s[i]=='m' || s[i]=='n')
                a[i] = 5;
            if(s[i]=='R' || s[i]=='r')
                a[i] = 6;
        }

        for(int i=0 ; i<l-1 ; i++){
            if(a[i]==a[i+1])
                b[i] = 1;
        }
        /*
        for(int i=0 ; i<l ; i++){
            cout<<a[i];
        }
        cout<<endl;
        */
        for(int i=0 ; i<l ; i++){
            if(a[i]!=0 && b[i]==0)
            cout<<a[i];
        }
        cout<<endl;

    }
    return 0;
}
