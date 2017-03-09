#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b){
    if(b==0)
        return a;
    return gcd(b,a%b);
}

int main(){
    string s;
    int ar[110],r,p,mx,n;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,s);
        r = 0;
        p = 0;
        for(int i=0 ; i<=s.size() ; i++){
            if(s[i]>='0' && s[i]<='9')
                r = r*10 + s[i]-'0';
            else{
                ar[p] = r;
                r = 0;
                p++;
                //continue;
            }
        }

        mx = 0;
        for(int i=0 ; i<p ; i++){
            //cout<<ar[i] <<endl;
            for(int j=0 ; j<p ; j++){
                if(i==j || ar[i]==0 || ar[j]==0)
                    continue;
                else{
                    if(gcd(ar[i],ar[j])>mx)
                        mx = gcd(ar[i],ar[j]);
                }
            }
        }
        cout<<mx <<endl;

    }

    return 0;
}
