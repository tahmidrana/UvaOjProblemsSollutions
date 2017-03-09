#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    for(int i=0 ; i<t ; i++){
        scanf("%d %d %d",&a,&b,&c);
        a = a*a;
        b = b*b;
        c = c*c;
        if(a+b>=c)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
