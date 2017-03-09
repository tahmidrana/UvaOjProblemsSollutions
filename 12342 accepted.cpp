#include <iostream>
#include <cmath>
using namespace std;

double Tax(double tk){
    double res=0;
    tk=tk-180000;
    if(tk<300000){
        res+=(tk*10)/100;
    }

    else{
        res+=(300000*10)/100;
        tk=tk-300000;
        if(tk<400000)
            res+=(tk*15)/100;
        else{
            res+=(400000*15)/100;
            tk=tk-400000;
            if(tk<300000)
                res+=(tk*20)/100;
            else{
                res+=(300000*20)/100;
                tk=tk-300000;

                res+=(tk*25)/100;
            }
        }
    }
    return res;
}

int main()
{
    double n;
    int t;
    cin>>t;
    for(int i=1 ; i<=t ; i++){
        cin>>n;
        int res=ceil(Tax(n));
        if(res<0)
            cout<<"Case "<<i <<": "<<0<<endl;
        else if(Tax(n)>0 && Tax(n)<2000)
            cout<<"Case "<<i <<": "<<2000<<endl;
        else
            cout<<"Case "<<i <<": "<<res<<endl;
    }
    return 0;
}
