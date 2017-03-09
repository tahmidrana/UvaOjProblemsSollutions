#include <bits/stdc++.h>
using namespace std;

#define A 10
#define B 11
#define C 12
#define D 13
#define E 14
#define F 15

string decToHex(string s){
    string res = "0x";
    int dec = 0,hex[100];

    for(int i=0 ; i<s.length() ; i++)
    {
        dec = dec*10+(s[i]-'0');
    }

    int p=0;
    while(dec>0)
    {
        hex[p] = dec%16;
        dec /= 16;
        p++;
    }

    for(int i=p-1 ; i>=0 ; i--)
    {
        if(hex[i]==10)
            res += 'A';
        else if(hex[i]==11)
            res += 'B';
        else if(hex[i]==12)
            res += 'C';
        else if(hex[i]==13)
            res += 'D';
        else if(hex[i]==14)
            res += 'E';
        else if(hex[i]==15)
            res += 'F';
        else
            res += hex[i]+'0';
    }
    return res;
}


int hexToDec(string s){
    int p=0,dec=0,dig;
    for(int i=s.size()-1 ; i>=2 ; i--){
        if(s[i]=='A')
            dig = A;
        else if(s[i]=='B')
            dig = B;
        else if(s[i]=='C')
            dig = C;
        else if(s[i]=='D')
            dig = D;
        else if(s[i]=='E')
            dig = E;
        else if(s[i]=='F')
            dig = F;
        else
            dig = s[i]-'0';
        dec += dig*pow(16,p);
        p++;
    }
    return dec;
}

int main()
{
    string s;
    while(cin>>s)
    {
        if(s[0]=='-')
            return 0;
        if(s[0]=='0' && s[1]=='x'){
            cout<<hexToDec(s) <<endl;
        }
        else
            cout<<decToHex(s) <<endl;
    }
    return 0;
}
