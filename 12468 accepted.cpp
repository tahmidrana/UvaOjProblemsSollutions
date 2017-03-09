#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int x,y,a,b,max,min;
    while(~scanf("%d %d",&a,&b) && (a!=-1 && b!=-1)){
        if(a<b){
            max=b;
            min=a;
        }
        else{
            max=a;
            min=b;
        }
        x=max-min;
        y=(99-max)+min+1;
        if(x<y)
            printf("%d\n",x);
        else
            printf("%d\n",y);
    }
    return 0;
}
