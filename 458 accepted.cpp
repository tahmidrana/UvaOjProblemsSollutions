#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    string ar;
    int i;
    while(getline(cin,ar)){
    for(i=0;ar[i];i++){
        ar[i]=ar[i]-7;
        printf("%c",ar[i]);
    }
    cout<<endl;
    }
    return 0;
}
