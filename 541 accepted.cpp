#include <iostream>
#include <cstdio>
using namespace std;
#define N 105
int main()
{
    int ar[N][N],n,x,y,i,j;
    while(~scanf("%d",&n) && n!=0){
        for(i=1 ; i<=n ; i++){
            for(j=1 ; j<=n ; j++)
                scanf("%d",&ar[i][j]);
        }

        int r_sum,c_sum,r_c=0,c_c=0;
        for(i=1 ; i<=n ; i++){
            r_sum=0;
            for(j=1 ; j<=n ; j++){
                r_sum+=ar[i][j];
            }
            //cout<<"row:"<<i<<" "<<r_sum <<endl;

            if(r_sum%2!=0){
                x=i;
                r_c++;
            }
        }

        for(i=1 ; i<=n ; i++){
            c_sum=0;
            for(j=1 ; j<=n ; j++){
                c_sum+=ar[j][i];
            }
            //cout<<"col:"<<i<<" "<<c_sum <<endl;

            if(c_sum%2!=0){
                y=i;
                c_c++;
            }
        }

        if(r_c==0 && c_c==0)
            printf("OK\n");
        else if(r_c==1 && c_c<=1 || r_c<=1 && c_c==1)
            printf("Change bit (%d,%d)\n",x,y);
        else
            printf("Corrupt\n");
    }
    return 0;
}
