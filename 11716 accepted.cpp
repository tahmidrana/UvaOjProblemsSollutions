#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool flag;
    int n,len,p;
    float l;
    //char s[10010];
    string s;
    char ar[1000][1000];
    cin>>n;
    getchar();
    for(int i=0 ; i<n ; i++){
        //fflush(stdin);
        getline(cin,s);
        len = s.size();
        l = sqrt(len);
        if(l-sqrt(len)==0)
            flag = true;
        else
            flag = false;

        if(flag){
            p = 0;
            for(int i=0 ; i<l ; i++){
                for(int j=0 ; j<l ; j++){
                    ar[i][j] = s[p];
                    p++;
                }
            }

            for(int i=0 ; i<l ; i++){
                for(int j=0 ; j<l ; j++){
                    cout<<ar[j][i];
                }
            }
            cout<<endl;

        }


        else
            cout<<"INVALID" <<endl;
    }
    return 0;
}
