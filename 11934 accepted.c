/******************************
   *  11934
   *  magic formula
   *  Accepted
   *  Md. tahmidur Rahman
*******************************/
#include <stdio.h>
#include <math.h>
int main()
{
    long long int i,a,b,c,d,L,count,p;
    while(scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L)==5){
            count=0;
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;
        for(i=0;i<=L;i++){
            p=a*pow(i,2)+b*i+c;
            if(p%d==0)
                count++;
        }
        printf("%lld\n",count);
    }
    return 0;
}
