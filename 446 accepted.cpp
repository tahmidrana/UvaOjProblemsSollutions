#include <bits/stdc++.h>
using namespace std;

#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15

string rev(string s){
    string res = "";
    for(int i=s.size()-1 ; i>=0 ; i--){
        res += s[i];
    }
    return res;
}

string hexToBin(string s){
    string bin = "",dig;
    int hex[100],p = 0;
    for(int i=0 ; i<s.size() ; i++){
        if(s[i]=='A')
            hex[p] = A;
        else if(s[i]=='B')
            hex[p] = B;
        else if(s[i]=='C')
            hex[p] = C;
        else if(s[i]=='D')
            hex[p] = D;
        else if(s[i]=='E')
            hex[p] = E;
        else if(s[i]=='F')
            hex[p] = F;
        else
            hex[p] = s[i]-'0';
        p++;
    }
    for(int i=0 ; i<p ; i++){
        dig = "";
        int num = hex[i];
        int mod;
        //cout<<num <<endl;
        if(num==0)
            bin += "0000";
        else{
            while(num>0){
                mod = num%2;
                num /= 2;
                dig += mod+'0';
            }
        }
        dig = rev(dig);
        if(dig.size()==4)
            dig = dig;
        else if(dig.size()==3)
            dig = "0" + dig;
        else if(dig.size()==2)
            dig = "00" + dig;
        else if(dig.size()==1)
            dig = "000" + dig;
        bin += dig;
    }
    int len = 13-bin.size();
    for(int i=1 ; i<=len ; i++)
        bin = "0" + bin;
    return bin;
}

int binToDec(string s){
    int p = 0,res = 0;
    for(int i=s.size()-1 ; i>=0 ; i--){
        res += (s[i]-'0')*pow(2,p);
        p++;
    }
    return res;
}

int main()
{
    string a,b;
    char s;
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>a>>s>>b;
        a = hexToBin(a);
        b = hexToBin(b);
        if(s=='+')
            cout<<a <<" + " <<b <<" = " <<binToDec(a)+binToDec(b)<<endl;
        if(s=='-'){
            if(binToDec(a)<binToDec(b))
                cout<<b <<" - " <<a <<" = " <<binToDec(b)-binToDec(a)<<endl;
            else
                cout<<a <<" - " <<b <<" = " <<binToDec(a)-binToDec(b)<<endl;
        }
    }

    return 0;
}
