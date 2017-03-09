/*********************
    *   11461
    *   square number
    *   accepted
**********************/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,y,i,count;
    float x,res;
    while(scanf("%d %d",&a,&b)==2){
        count=0;
    if(a==0 && b==0)
        break;
    for(i=a;i<=b;i++){
        x=sqrt(i);
        y=sqrt(i);
        res=x-y;
        if(res==0)
            count++;
        }
    printf("%d\n",count);
    }
    return 0;
}
