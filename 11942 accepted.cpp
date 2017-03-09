#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[15],n,ord,un;
    scanf("%d",&n);
    //printf("Lumberjacks:\n");
    for(int i=0 ; i<n ; i++){
        //if(i==0)
            //printf("Lumberjacks:\n");
        ord = 0;
        un = 0;
        for(int j=0 ; j<10 ; j++){
            cin>>a[j];
        }

        for(int j=1 ; j<10 ; j++){
            if(a[j]<a[j-1])
                un++;
            if(a[j]>a[j-1])
                ord++;
        }

        if(i==0)
            printf("Lumberjacks:\n");
        if(un==9 || ord==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");

        //cout<<ord <<" " <<un <<endl;;
    }
    return 0;
}
