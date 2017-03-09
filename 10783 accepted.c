#include <stdio.h>
int loop()
{
    int a,b,j,res;
    res=0;
    scanf("%d %d",&a,&b);
        for(j=a;j<=b;j++){
        if(j%2!=0)
        res=res+j;
        }
        return res;
}
int main()
{
    int T,i,a;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        printf("Case %d: %d\n",i,loop());
    }
    return 0;
}
