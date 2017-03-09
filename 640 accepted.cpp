#include <iostream>
using namespace std;
const long SIZE = 1000001;
long ar[SIZE];

long digSum(long n){
    long m,res=0;
    while(n>0){
        m = n%10;
        n = n/10;
        res += m;
    }
    return res;
}

void selfNumber(){
    int s;
    for(long i=1 ; i<SIZE ; i++){
        s = i+digSum(i);
        ar[s]=1;
    }
}

int main()
{
    selfNumber();

    for(long i=1 ; i<SIZE ; i++){
        if(ar[i]==0){
            cout<<i <<endl;
        }
    }

    return 0;
}
