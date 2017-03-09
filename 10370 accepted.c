/*****************************
    *   10424
    *   Above Average
    *   Accepted
******************************/
#include <stdio.h>
int main()
{
    int i,j,k,C,a[1000],N,b,avg;
    double per,count;
    scanf("%d",&C);
    for(k=0;k<C;k++){
        b=0;
        count=0;
    scanf("%d",&N);
    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
        b=b+a[i];
    }
    avg=b/N;
    for(j=0;j<N;j++){
        if(a[j]>avg){
            count++;
            }
        }
    per=(count*100)/N;
    printf("%0.3lf%c\n",per,'%');
    }
    return 0;
}
