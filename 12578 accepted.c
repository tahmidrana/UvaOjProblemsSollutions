/*************************
    *   12578
    *   10:6:2
    *   Accepted
**************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int T,i;
    double area_circle,area_rect,w,r,L;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%lf",&L);
        w=(6*L)/10;
        r=(2*L)/10;
        area_circle=acos(-1)*(r*r);
        area_rect=(L*w)-area_circle;
        printf("%0.2lf %0.2lf\n",area_circle,area_rect);
    }
    return 0;
}
