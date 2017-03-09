#include <iostream>
using namespace std;
int main()
{
    int n,ar[110],t,x,res,count,p=0;
    while(cin>>n){
        p++;
        if(n==0)
            break;
        res=0;
        count=0;
        for(int i=0 ; i<n ; i++){
            cin>>ar[i];
            res+=ar[i];
        }
        t=res/n;
        for(int i=0 ; i<n ; i++){
            x=ar[i];
            while(x!=t){
                if(x<t)
                    x++;
                else if(x>t)
                    x--;
                count++;
            }
        }
        cout<<"Set #"<<p <<endl;
        cout<<"The minimum number of moves is "<<count/2 <<"."<<endl<<endl;
    }
    return 0;
}
