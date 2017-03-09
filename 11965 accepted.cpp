#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int t,n,l,count,ar[600];
    scanf("%d",&t);
    for(int c=1 ; c<=t ; c++){

        //memset(ar,0,sizeof ar);
        scanf("%d",&n);
        getchar();
        cout<<"Case " <<c <<":" <<endl;
        while(n--){
            memset(ar,0,sizeof ar);
            getline(cin,s);
            l = s.size();
            count = 0;
            for(int i=0 ; i<l ; i++){
                if(s[i]==' '  && s[i+1]==' ')
                    ar[i]=1;
            }

            for(int i=0 ; i<l ; i++){
                if(ar[i]==0)
                    cout<<s[i];
            }
            cout<<endl;
        }
        if(c<t)
            cout<<endl;
    }
    return 0;
}
