/*************************************
        *   12602
        *   Nice Licence Plate
        *   Accepted
**************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int N,i,j,k,l,temp,first_part,total,res;
    char a[10];
    scanf("%d",&N);
    for(i=0;i<N;i++){
        first_part=0;
        temp=0;
        scanf("%s",a);
        for(j=0,k=2;j<=2;j++,k--){
            a[j]=a[j]-'A';
            total=a[j]*pow(26,k);
            first_part=first_part+total;
        }
        for(l=4;a[l];l++)
            temp=temp*10+a[l]-'0';
        if(first_part<temp)
            res=temp-first_part;
        else
            res=first_part-temp;
        if(res<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
