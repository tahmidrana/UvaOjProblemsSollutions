/******************
    *   Accepted
*******************/
#include <stdio.h>
int main()
{
    int T,R,i,w,l,l_left,l_right,w_up,w_down;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&R);
        w=(6*R)/2;
        l=(10*R)/2;
        l_left=-(45*l)/100;
        l_right=(55*l)/100;
        w_up=w/2;
        w_down=-(w/2);
        printf("Case %d:\n%d %d\n%d %d\n%d %d\n%d %d\n",i,l_left,w_up,l_right,w_up,l_right,w_down,l_left,w_down);
    }
    return 0;
}
