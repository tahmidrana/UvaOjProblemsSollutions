#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int t;
    long long d1,d2,m1,m2,y1,y2,age1,age2,fin_age;
    char c;
    cin >> t;
    for(int i = 0 ; i < t ; i++){

        cin>>d1>>c>>m1>>c>>y1;
        cin>>d2>>c>>m2>>c>>y2;
        age1=d1+m1*30+y1*365;
        age2=d2+m2*30+y2*365;
        fin_age=(age1-age2)/365;
        if(fin_age>130)
            cout<<"Case #"<<i+1<<": "<<"Check birth date" <<endl;
        else if(fin_age<0 || age1-age2<0)
            cout<<"Case #"<<i+1<<": "<<"Invalid birth date" <<endl;
        else
            cout<<"Case #"<<i+1<<": "<<fin_age <<endl;
    }
    return 0;
}
