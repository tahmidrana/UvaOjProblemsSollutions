#include <bits/stdc++.h>
using namespace std;
#define INF 2147483646
int main()
{
    int n,books[10010],m,p,i_books[10010],j_books[10010],res[10010],min,x;
    while(cin>>n){
        for(int i=0 ; i<n ; i++)
            cin>>books[i];
        cin>>m;
        sort(books,books+n);
        p = 0;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                if(books[i]+books[j]==m){
                    i_books[p] = books[i];
                    j_books[p] = books[j];
                    res[p] = abs(books[j]-books[i]);
                    p++;
                }
            }
        }
        /*
        for(int i=0 ; i<p ; i++)
            cout<<"i: " <<i_books[i] <<"  j: " <<j_books[i] <<"  res: "<<res[i] <<endl<<endl;

        */
        min = INF;
        for(int i=0 ; i<p ; i++){
            if(res[i]<min && i_books[i]<=j_books[i]){
                //cout<<"Peter should buy books whose prices are "<<i_books[i] <<" and "<<j_books[i] <<"."<<endl<<endl;
                min = res[i];
                x = i;
            }
        }
        cout<<"Peter should buy books whose prices are "<<i_books[x] <<" and "<<j_books[x] <<"."<<endl<<endl;
    }
    return 0;
}
