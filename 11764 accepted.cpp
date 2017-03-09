/*************************
    *   11764
    *   jumping mario
**************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,a[55];
    cin>>T;
    for(int i=1;i<=T;i++){
        int upcnt=0,dwcnt=0;
        cin>>N;
        for(int j=0;j<N;j++)
            cin>>a[j];
        for(int k=0;k<N-1;k++){
            if(a[k+1]>a[k])
                upcnt++;
            if(a[k+1]<a[k])
                dwcnt++;
        }
    cout<<"Case "<<i <<": "<<upcnt<<" "<<dwcnt<<endl;
    }
    return 0;
}
