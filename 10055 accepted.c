#include <stdio.h>
int main()
{
    long unsigned a,b;
    while(scanf("%lu %lu",&a,&b)==2){
        if(a<b)
            printf("%lu\n",b-a);
        else
            printf("%lu\n",a-b);
    }
    return 0;
}
