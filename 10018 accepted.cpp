/****************************
    *   10018
    *   reverse and add
*****************************/
#include <iostream>
using namespace std;
long long rev(long long num)
{
    long long res=0,mod;
    while(num>=1){
        mod=num%10;
        num=num/10;
        res=res*10+mod;
    }
    return res;
}
int main()
{
    long long N,P,count;
    cin>>N;
    for(int i=0;i<N;i++){
            count=0;
        cin>>P;
        while(1){
        if(P==rev(P))
            break;
        else
            P=P+rev(P);
        count++;
        }
    cout<<count<<" "<<rev(P)<<endl;
    }
    return 0;
}
