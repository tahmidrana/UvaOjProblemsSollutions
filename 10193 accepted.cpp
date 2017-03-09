#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int GCD (int a,int b){
    if(b==0)
        return a;
    else
        return GCD(b,a%b);
}

int main()
{
    string s,s1;
    int n,x,y,len_s,len_s1,p,q;
    cin>>n;
    for(int i=1 ; i<=n ; i++){
        cin>>s>>s1;
        x = 0;
        y = 0;
        p = 0;
        q = 0;
        len_s = s.size();
        len_s1 = s1.size();
        for(int j=len_s-1 ; j>=0 ; j--){
            x+=(s[j]-'0')*pow(2,p);
            p++;
        }
        for(int j=len_s1-1 ; j>=0 ; j--){
            y+=(s1[j]-'0')*pow(2,q);
            q++;
        }
        if(GCD(x,y)==1)
            cout<<"Pair #"<<i<<": Love is not all you need!"<<endl;
        else
            cout<<"Pair #"<<i<<": All you need is love!"<<endl;
    }
    return 0;
}
