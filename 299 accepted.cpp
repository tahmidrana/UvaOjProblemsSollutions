#include <iostream>
using namespace std;
int main()
{
    int arr[50],L,range,temp,N;
    cin>>N;
    for(int k=0;k<N;k++){
        int count=0;
    cin>>L;
    for(int i=0;i<L;i++){
        cin>>arr[i];
    }
    range=L-1;
    for(int i=0;i<range;i++){
        for(int j=0;j<range-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            count++;
            }
        }
    }
    cout<<"Optimal train swapping takes "<< count<<" swaps."<<endl;
    }
    return 0;
}
