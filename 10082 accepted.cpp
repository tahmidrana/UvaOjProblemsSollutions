#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int main()
{
    char x[1000];
    while(cin.getline(x,1000)){
    for(int i=0;x[i];i++){
        if(x[i]=='=')
            cout<<'-';
        if(x[i]=='-')
            cout<<'0';
        if(x[i]=='0')
            cout<<'9';
        if(x[i]=='9')
            cout<<'8';
        if(x[i]=='8')
            cout<<'7';
        if(x[i]=='7')
            cout<<'6';
        if(x[i]=='6')
            cout<<'5';
        if(x[i]=='5')
            cout<<'4';
        if(x[i]=='4')
            cout<<'3';
        if(x[i]=='3')
            cout<<'2';
        if(x[i]=='2')
            cout<<'1';
        if(x[i]==']')
            cout<<'[';
        if(x[i]=='[')
            cout<<'P';
        if(x[i]=='P')
            cout<<'O';
        if(x[i]=='O')
            cout<<'I';
        if(x[i]=='I')
            cout<<'U';
        if(x[i]=='U')
            cout<<'Y';
        if(x[i]=='Y')
            cout<<'T';
        if(x[i]=='T')
            cout<<'R';
        if(x[i]=='R')
            cout<<'E';
        if(x[i]=='E')
            cout<<'W';
        if(x[i]=='W')
            cout<<'Q';
        if(x[i]=='Q')
            cout<<'Q';
        if(x[i]=='\'')
            cout<<';';
        if(x[i]==';')
            cout<<'L';
        if(x[i]=='L')
            cout<<'K';
        if(x[i]=='K')
            cout<<'J';
        if(x[i]=='J')
            cout<<'H';
        if(x[i]=='H')
            cout<<'G';
        if(x[i]=='G')
            cout<<'F';
        if(x[i]=='F')
            cout<<'D';
        if(x[i]=='D')
            cout<<'S';
        if(x[i]=='S')
            cout<<'A';
        if(x[i]=='/')
            cout<<'.';
        if(x[i]=='.')
            cout<<',';
        if(x[i]==',')
            cout<<'M';
        if(x[i]=='M')
            cout<<'N';
        if(x[i]=='N')
            cout<<'B';
        if(x[i]=='B')
            cout<<'V';
        if(x[i]=='V')
            cout<<'C';
        if(x[i]=='C')
            cout<<'X';
        if(x[i]=='X')
            cout<<'Z';
        if(x[i]==32)
            cout<<" ";
    }
    cout<<endl;
    }
    return 0;
}
