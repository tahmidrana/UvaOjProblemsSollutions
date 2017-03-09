/**************************
    *   12403
    *   Save Setu
    *   Accepted
****************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int K,x,y,i,T,total=0;
    char a[10];
    scanf("%d",&T);
    for(i=0;i<T;i++){
    scanf("%s",a);
        x=strcmp(a,"donate");
        y=strcmp(a,"report");
        if(x==0){
            scanf("%d",&K);
            total=total+K;}
        if(y==0)
            printf("%d\n",total);
    }
    return 0;
}
