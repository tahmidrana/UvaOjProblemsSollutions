/*****************************
    *   11530
    *   SMS Typing
    *   Accepted
******************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,b,t;
    char a[100],T[5];
    gets(T);
    t=atoi(T);
    for(j=0;j<t;j++){
    b=0;
    gets(a);
    for(i=0;i<strlen(a);i++){
        if(a[i]>='a' && a[i]<='c')
            a[i]=a[i]-'a'+1;
        if(a[i]>='d' && a[i]<='f')
            a[i]=a[i]-'d'+1;
        if(a[i]>='g' && a[i]<='i')
            a[i]=a[i]-'g'+1;
        if(a[i]>='j' && a[i]<='l')
            a[i]=a[i]-'j'+1;
        if(a[i]>='m' && a[i]<='o')
            a[i]=a[i]-'m'+1;
        if(a[i]>='p' && a[i]<='s')
            a[i]=a[i]-'p'+1;
        if(a[i]>='t' && a[i]<='v')
            a[i]=a[i]-'t'+1;
        if(a[i]>='w' && a[i]<='z')
            a[i]=a[i]-'w'+1;
        if(a[i]==32)
            a[i]=1;
        b=b+a[i];
    }
    printf("Case #%d: %d\n",j+1,b);
    }
    return 0;
}
