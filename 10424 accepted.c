/*****************************
    *   10424
    *   Love Calculator
    *   Accepted
******************************/
#include <stdio.h>
int main()
{
    int i,j,k,l,c,d,mod,res,mod1,res1,mod2,mod3;
    double ratio,res2,res3;
    char a[25],b[25];
    while(gets(a),gets(b)){
        c=0;
        d=0;
        res=0;
        res1=0;
        res2=0;
        res3=0;
    for(i=0;a[i];i++){
        if(a[i]>='a' && a[i]<='z')
            a[i]=a[i]-'a'+1;
        else if(a[i]>='A' && a[i]<='Z')
            a[i]=a[i]-'A'+1;
        else
            a[i]=a[i]-a[i];
        c=c+a[i];
    }
    for(j=0;b[j];j++){
        if(b[j]>='a' && b[j]<='z')
            b[j]=b[j]-'a'+1;
        else if(b[j]>='A' && b[j]<='Z')
            b[j]=b[j]-'A'+1;
        else
            b[j]=b[j]-b[j];
        d=d+b[j];
    }
    for(k=0;k<=10;k++){
        mod=c%10;
        c=c/10;
        res=res+mod;
        mod1=d%10;
        d=d/10;
        res1=res1+mod1;
    }
    for(l=0;l<=10;l++){
        mod2=res%10;
        res=res/10;
        res2=res2+mod2;

        mod3=res1%10;
        res1=res1/10;
        res3=res3+mod3;
    }
    if(res2>res3)
        ratio=(res3*100)/res2;
    else
        ratio=(res2*100)/res3;
    printf("%0.2lf %c\n",ratio,'%');
    }
    return 0;
}
