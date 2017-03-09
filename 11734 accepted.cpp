#include <bits/stdc++.h>
using namespace std;

bool matchStr(string a,string b){
    string c = "";
    for(int i=0 ; i<a.size() ; i++){
        if(a[i]!=32)
            c += a[i];
    }
    if(b==c)
        return true;
    else
        return false;
}

int main()
{
    int t,l1,l2;
    string a,b;
    scanf("%d",&t);
    getchar();
    for(int c=1 ; c<=t ; c++){
        getline(cin,a);
        getline(cin,b);
        printf("Case %d: ",c);
        if(a==b)
            printf("Yes\n");
        else{
            if(matchStr(a,b))
                printf("Output Format Error\n");
            else
                printf("Wrong Answer\n");
        }
    }
    return 0;
}
