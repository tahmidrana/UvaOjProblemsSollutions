#include <stdio.h>
#include <string.h>
int main()
{
    int i,a,b;
    char ch[10],x[10]="Hajj",y[10]="Umrah";
    for(i=1;;i++){
        scanf("%s",ch);
        a=strcmp(x,ch);
        b=strcmp(y,ch);
        if(a==0)
        printf("Case %d: Hajj-e-Akbar\n",i);
        else if(b==0)
        printf("Case %d: Hajj-e-Asghar\n",i);
        else
        break;
    }
    return 0;
}
