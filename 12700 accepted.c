/***************************
    *  12700
    *  Bangla Wash
    *  ACCEPTED
****************************/
#include <stdio.h>
int main()
{
    int T,N,i,j,bd,ww,tie,aban,total;
    char x[11];
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&N);
        for(j=0;j<N;j++){
        scanf("%s",x);
        bd=0;
        ww=0;
        tie=0;
        aban=0;
        for(j=0;x[j];j++){
            if(x[j]=='B')
                bd++;
            if(x[j]=='W')
                ww++;
            if(x[j]=='T')
                tie++;
            if(x[j]=='A')
                aban++;
        }
    total=N-aban;
    if(bd==total && bd>0)
        printf("Case %d: BANGLAWASH\n",i);
    if(ww==total && ww>0)
        printf("Case %d: WHITEWASH\n",i);
    if(total==0)
        printf("Case %d: ABANDONED\n",i);
    if(bd==ww && bd>0 && ww>0 || tie==total && tie>0)
        printf("Case %d: DRAW %d %d\n",i,bd,tie);
    if(bd>ww && bd<total)
        printf("Case %d: BANGLADESH %d - %d\n",i,bd,ww);
    if(ww>bd && ww<total)
        printf("Case %d: WWW %d - %d\n",i,ww,bd);
        }
    }
    return 0;
}
