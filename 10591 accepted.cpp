#include <iostream>
using namespace std;

int sum(int n){
    int r = 0,m;
    while(n>0){
        m = n%10;
        n = n/10;
        r += (m*m);
    }
    if(r<=9)
        return r;
    else
        return sum(r);
}

int main()
{
    int n,t;
    cin>>t;
    for(int i=1 ; i<=t ; i++){
        cin>>n;
        if(sum(n)==1)
            cout<<"Case #" <<i <<": " <<n <<" is a Happy number." <<endl;
        else
            cout<<"Case #" <<i <<": " <<n <<" is an Unhappy number." <<endl;
    }

    return 0;
}
