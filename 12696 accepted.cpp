/**************************
    *   12696
    *   Cabin Baggage
    *   accepted
***************************/
#include <iostream>
using namespace std;
double calc(double l,double w,double d,double we)
{
    double res;
    res=l+w+d;
    if((l<=56 && w<=45 && d<=25) && we<=7)
        return 1;
    if(res<=125 && we<=7)
        return 1;
    return 0;
}
int main()
{
    double len,wid,dep,weight;
    int t,i,count=0,x;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>len >>wid >>dep >>weight;
        x=calc(len,wid,dep,weight);
        if(x==1){
            cout<<"1"<<endl;
            count++;
        }
        if(x==0)
            cout<<"0"<<endl;
    }
    cout<<count<<endl;
    return 0;
}
