//accepted
#include <stdio.h>
#include <math.h>
int main()
{
    double u,a,t,v,s;
    int i,d;
    for(d=1;d<100;d++){
        scanf("%d",&i);
        if(i==1){
            scanf("%lf %lf %lf",&u,&v,&t);
            a=(v-u)/t;
            s=(2*u*t+a*pow(t,2))/2;
            printf("Case %d: %.3lf %.3lf\n",d,s,a);
        }
        else if(i==2){
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=(2*u*t+a*pow(t,2))/2;
            printf("Case %d: %.3lf %.3lf\n",d,s,t);
        }
        else if(i==3){
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((pow(u,2)+2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",d,v,t);
        }
        else if(i==4){
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((pow(v,2)-2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",d,u,t);
        }
        else if(i==0)
            break;
    }
}
