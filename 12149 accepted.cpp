#include <iostream>
#include <cstdio>
#define N 100
using namespace std;
int ar[110];

void calc(){
    int n,res;
    for(int i = 0 ; i <= 105 ; i++){
        n=i;
        res=(n*(n+1)*(2*n+1))/6;
        ar[i]=res;
    }
}

int main()
{
    int n;
    calc();
    while(cin>>n && n!=0){
        cout<<ar[n] <<endl;
    }
    return 0;
}
