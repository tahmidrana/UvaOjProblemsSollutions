#include <stdio.h>
#include <math.h>
int main()
{
    long unsigned n,i,j,k,mod,m,m1,res,r,r1,x,y,z;
    while(scanf("%lu",&n)==1){
    res=0;
    r=0;
    r1=0;
    if(n==0)
        break;
    x=log10(n)+1;
    for(i=0;i<=x+1;i++){
        mod=n%10;
        n=n/10;
        res=res+mod;
    }
    printf("%lu\n",res);
    y=log10(res)+1;
    for(j=0;j<=y+1;j++){
        m=res%10;
        res=res/10;
        r=r+m;
        }
    printf("%lu\n",r);
    z=log10(r)+1;
    for(k=0;k<=z+1;k++){
        m1=r%10;
        r=r/10;
        r1=r1+m1;
        }
    printf("%lu\n",r1);
    }
    return 0;
}
