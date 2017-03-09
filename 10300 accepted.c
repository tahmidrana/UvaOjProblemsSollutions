#include <stdio.h>
int loop()
{
    int f,j,a,b,c,res,sum=0;
    scanf("%d",&f);
        for(j=1;j<=f;j++){
            scanf("%d %d %d",&a,&b,&c);
            res=a*c;
            sum=sum+res;
        }
        return sum;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d\n",loop());
    }
    return 0;
}
