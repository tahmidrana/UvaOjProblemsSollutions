#include <bits/stdc++.h>
using namespace std;

int month_number(string s){
    if( s == "pop" ) return 0;
    if( s == "no" ) return 1;
    if( s == "zip" ) return 2;
    if( s == "zotz" ) return 3;
    if( s == "tzec" ) return 4;
    if( s == "xul" ) return 5;
    if( s == "yoxkin" ) return 6;
    if( s == "mol" ) return 7;
    if( s == "chen" ) return 8;
    if( s == "yax" ) return 9;
    if( s == "zac" ) return 10;
    if( s == "ceh" ) return 11;
    if( s == "mac" ) return 12;
    if( s == "kankin" ) return 13;
    if( s == "muan" ) return 14;
    if( s == "pax" ) return 15;
    if( s == "koyab" ) return 16;
    if( s == "cumhu" ) return 17;
    if( s == "uayet" ) return 18;
}

int main()
{
    int t,d,y,month,x,Year,Day,Month;
    char m[20];
    string m_haab;
    string mon_zolkin[]={"imix","ik","akbal","kan","chicchan","cimi","manik","lamat","muluk","ok","chuen","eb","ben","ix","mem","cib","caban","eznab","canac","ahau"};
    scanf("%d",&t);
    printf("%d\n",t);
    while(t--){
        m_haab = "";
        scanf("%d. %s %d",&d,&m,&y);
        for(int i=0 ; i<strlen(m) ; i++)
            m_haab += m[i];
        month = month_number(m_haab);
        x = y*365 + (month)*20 + d;
        Year = x/260;
        Day = (x%13)+1;
        Month = x%20;
        cout<<Day <<" " <<mon_zolkin[Month] <<" " <<Year <<endl;
    }
    return 0;
}
