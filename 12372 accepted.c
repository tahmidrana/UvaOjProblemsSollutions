/****************************
    *  12372
    *  accepted
*****************************/
#include <stdio.h>
int main()
{
    int T,a,b,c,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
            printf("Case %d: good\n",i);
        else
            printf("Case %d: bad\n",i);
    }
    return 0;
}
