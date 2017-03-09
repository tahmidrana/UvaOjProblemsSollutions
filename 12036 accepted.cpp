#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int ar[110];
    int grid[100][100];
    int n,t,x;
    cin>>t;
    for(int c=1 ; c<=t ; c++){
        for(x=0 ; x<101 ; x++)
            ar[x]=0;
        cin>>n;
        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++)
                cin>>grid[i][j];
        }

        for(int i=0 ; i<n ; i++){
            for(int j=0 ; j<n ; j++){
                ar[grid[i][j]]++;
            }
        }
        int count=0;
        for(x=0 ; x<101 ; x++){
            if(ar[x]>n){
                count++;
                break;
            }
        }

        if(count==0)
            cout<<"Case " <<c <<": " <<"yes" <<endl;
        else
            cout<<"Case " <<c <<": " <<"no" <<endl;
    }
    return 0;
}
