#include <stdio.h>
int GCD(int a,int b)
{
    int c;
    while(a!=0)
    {
        c=a;
        a=b%a;
        b=c;
    }
    return b;
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
