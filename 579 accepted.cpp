#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h,m,x,y,res;
    while(~scanf("%lf:%lf",&h,&m)){
        if(h==0 && m==0)
            break;
        if(h==12)
            h = 0;
        x = 30.0*h+(m/60)*30.0;
        y = m*6;
        res = abs(x-y);
        if(res>180)
            res = 360.0-abs(x-y);
        printf("%.3f\n", res);
    }
    return 0;
}
