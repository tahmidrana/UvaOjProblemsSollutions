/************************
    *   10327
    *   Flip sort
    *   accepted
*************************/
#include <iostream>
using namespace std;
int main()
{
    int N,arr[1005],M,count,temp;
    while(cin>>N){
            count=0;
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int len=N-1;
        for(int i=0;i<len;i++){
            for(int j=0;j<len-i;j++){
                if(arr[j]>arr[j+1]){
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    count++;
                }
            }
        }
        cout<<"Minimum exchange operations : "<<count<<endl;
    }
    return 0;
}
