/*************************
    *   12289
    *   One-Two-Three
    *   Accepted
**************************/
#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,t,l,x,y,z,len;
    char a[10],b[]="one",c[]="two",d[]="three";
    scanf("%d",&t);
    for(l=1;l<=t;l++){
        x=0,y=0,z=0;
        scanf("%s",a);
        len=strlen(a);
    for(i=0;a[i],b[i];i++){
        if(a[i]!=b[i])
            x++;}
    for(j=0;a[j],c[j];j++){
        if(a[j]!=c[j])
            y++;}
    for(k=0;a[k],d[k];k++){
        if(a[k]!=d[k])
            z++;
    }
    if(len==3){
        if(x==1 || x==0)
        printf("1\n");}
    if(len==3){
        if(y==1 || y==0)
        printf("2\n");}
    if(len==5){
        if(z==1 || z==0)
        printf("3\n");}
    }
    return 0;
}
