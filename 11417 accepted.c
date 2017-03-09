#include <stdio.h>
int GCD(int a,int b)
{
    int x,g;
    if(a<b)
        x=a;
    else
        x=b;
    for(;x>=1;x--){
        if(a%x==0 && b%x==0){
        g=x;
        break;
        }
    }
    return g;
}
int loop(int N)
{
    int G=0,i,j;
    for(i=1;i<N;i++)
    for(j=i+1;j<=N;j++){
        G+=GCD(i,j);
    }
    return G;
}
int main()
{
    int r;
    while(scanf("%d",&r)!=EOF){
        if(r==0)
        break;
        else
        printf("%d\n",loop(r));
    }
    return 0;
}
