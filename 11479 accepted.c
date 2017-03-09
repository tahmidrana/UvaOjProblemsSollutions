#include <stdio.h>
int main()
{
    int T,i;
    long a,b,c,max;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%ld %ld %ld",&a,&b,&c);
        max=a;
        if(max<b)
            max=b;
        if(max<c)
            max=c;
        if((a+b)<=max || (b+c)<=max || (a+c)<=max)
            printf("Case %d: %s\n",i,"Invalid");
        else if(a==b && b==c)
            printf("Case %d: %s\n",i,"Equilateral");
        else if(a==b || b==c || a==c)
            printf("Case %d: %s\n",i,"Isosceles");
        else if(a!=b && b!=c && c!=a)
            printf("Case %d: %s\n",i,"Scalene");
    }
    return 0;
}
