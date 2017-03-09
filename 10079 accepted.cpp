#include <iostream>
using namespace std;
int main()
{
    long long N;
    while(cin>>N){
        if(N<0)
            break;
        else
        cout<<(N*(N+1)+2)/2 <<endl;
    }
    return 0;
}
