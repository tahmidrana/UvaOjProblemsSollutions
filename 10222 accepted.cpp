#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    string x;
    while(getline(cin,x)){
    for(int i=0;x[i];i++){
        if(x[i]=='=')
            cout<<'0';
        if(x[i]=='-')
            cout<<'9';
        if(x[i]=='0')
            cout<<'8';
        if(x[i]=='9')
            cout<<'7';
        if(x[i]=='8')
            cout<<'6';
        if(x[i]=='7')
            cout<<'5';
        if(x[i]=='6')
            cout<<'4';
        if(x[i]=='5')
            cout<<'3';
        if(x[i]=='4')
            cout<<'2';
        if(x[i]=='3')
            cout<<'1';
        if(x[i]=='2')
            cout<<'`';
        if(x[i]==']')
            cout<<'p';
        if(x[i]=='[')
            cout<<'o';
        if(x[i]=='P' || x[i]=='p')
            cout<<'i';
        if(x[i]=='O' || x[i]=='o')
            cout<<'u';
        if(x[i]=='I' || x[i]=='i')
            cout<<'y';
        if(x[i]=='U' || x[i]=='u')
            cout<<'t';
        if(x[i]=='Y' || x[i]=='y')
            cout<<'r';
        if(x[i]=='T' ||x[i]=='t')
            cout<<'e';
        if(x[i]=='R' || x[i]=='r')
            cout<<'w';
        if(x[i]=='E' || x[i]=='e')
            cout<<'q';

        if(x[i]=='\\')
            cout<<';';
        if(x[i]=='\'')
            cout<<'l';
        if(x[i]==';')
            cout<<'k';
        if(x[i]=='L' || x[i]=='l')
            cout<<'j';
        if(x[i]=='K' ||x[i]=='k')
            cout<<'h';
        if(x[i]=='J' || x[i]=='j')
            cout<<'g';
        if(x[i]=='H' || x[i]=='h')
            cout<<'f';
        if(x[i]=='G' || x[i]=='g')
            cout<<'d';
        if(x[i]=='F' || x[i]=='f')
            cout<<'s';
        if(x[i]=='D' || x[i]=='d')
            cout<<'a';

        if(x[i]=='/')
            cout<<',';
        if(x[i]=='.')
            cout<<'m';
        if(x[i]==',')
            cout<<'n';
        if(x[i]=='M' || x[i]=='m')
            cout<<'b';
        if(x[i]=='N' || x[i]=='n')
            cout<<'v';
        if(x[i]=='B' || x[i]=='b')
            cout<<'c';
        if(x[i]=='V' || x[i]=='v')
            cout<<'x';
        if(x[i]=='C' || x[i]=='c')
            cout<<'z';
        if(x[i]==32)
            cout<<" ";
    }
    cout<<endl;
    }
    return 0;
}
