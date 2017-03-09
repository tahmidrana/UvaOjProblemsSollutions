/***********************
    *   11636
    *   hello world
    *   accpeted
************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int n,i=0,count,mod[50],si_b,j,c;
    while(scanf("%d",&n)==1){
        if(n<0)
            break;
            i++;
        printf("Case %d: %0.lf\n",i,ceil(log(n)/log(2)));
    }
    return 0;
}

