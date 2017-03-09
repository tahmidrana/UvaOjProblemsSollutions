#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ar[110][110];
    int len,m = 0,p = 0;
    for(int i=0 ; i<105 ; i++){
        for(int j=0 ; j<105 ; j++)
            ar[i][j] = ' ';
    }
    while(gets(ar[p])){
        len = strlen(ar[p]);
        ar[p][len] = ' ';
        m = max(m,len);
        p++;
    }

    for(int i=0 ; i<m ; i++){
        for(int j=p-1 ; j>=0 ; j--){
            cout<<ar[j][i];
        }
        cout<<endl;
    }
    return 0;
}
