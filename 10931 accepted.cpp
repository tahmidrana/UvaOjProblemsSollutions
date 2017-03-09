/*****************************
    *   10931
    *   parity
    *   accepted
******************************/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int x,mod[50],i,count,parity;
    while(cin>>x){
        if(x==0)
            break;
        i=0;
        count=0;
        parity=0;
        while(x!=0){
            mod[i]=x%2;
            x=x/2;
            i++;
            count++;
        }
        cout<<"The parity of ";
        for(i=count-1;i>=0;i--){
            if(mod[i]==1)
                parity++;
            printf("%d",mod[i]);
        }
        cout<<" is "<<parity<<" (mod 2)." <<endl;
    }
    return 0;
}
