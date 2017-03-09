#include <iostream>
using namespace std;

const int SIZE=5010;
int ans[SIZE];

void save(){
    for(int c=1 ; c<=SIZE ; c++){
        int x=c;
        int ar[10];

        for(int i=0 ; i<10 ; i++)
            ar[i]=0;
//        for(int i=0 ; i<10 ; i++)
//            cout<<ar[i] <<" ";
        int l=0;
        while(x!=0){
            l++;
            int mod = x%10;
            x=x/10;
            ar[mod]++;
        }
        int count=0;
        for(int i=0 ; i<10 ; i++){
            //cout<<ar[i]<<" ";
            if(ar[i]==1)
                count++;
        }

        if(count==l)
            ans[c]=ans[c-1]+1;
        else
            ans[c]=ans[c-1];
    }
}
int main()
{
    int n,m;
    save();

    while(cin>>n>>m){
        cout<<ans[m]-ans[n-1]<<endl;
    }

    return 0;
}
