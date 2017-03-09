#include <iostream>
#include <cmath>
using namespace std;

int conv_bin(int n){
    int c=0,m;
    while(n!=0){
        m=n%2;
        n=n/2;
        if(m==1)
            c++;
    }
    return c;
}

int conv_hex(int n){
    int p=0,res=0,m;
    while(n!=0){
        m=n%10;
        n/=10;
        res+=m*pow(16,p);
        p++;
    }
    return res;
}

int main()
{
    int n,b_count,hex_count,t;
        cin>>t;
    for(int i=0 ; i<t ; i++){
        cin>>n;
        b_count=conv_bin(n);
        hex_count=conv_bin(conv_hex(n));
        cout<<b_count <<" "<<hex_count<<endl;
    }
    return 0;
}
