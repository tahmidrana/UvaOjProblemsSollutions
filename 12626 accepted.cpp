#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int n,m_count,a_count,r_count,g_count,i_count,t_count,m;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        m_count=0,a_count=0,r_count=0,g_count=0,i_count=0,t_count=0;
        cin>>s;
        for(int j=0 ; j<s.size() ; j++){
            if(s[j]=='M')
                m_count++;
            if(s[j]=='A')
                a_count++;
            if(s[j]=='R')
                r_count++;
            if(s[j]=='G')
                g_count++;
            if(s[j]=='I')
                i_count++;
            if(s[j]=='T')
                t_count++;
        }
        a_count/=3;
        r_count/=2;

        m=a_count;
        if(m_count<m)
            m=m_count;
        if(r_count<m)
            m=r_count;
        if(g_count<m)
            m=g_count;
        if(i_count<m)
            m=i_count;
        if(t_count<m)
            m=t_count;
        cout<<m <<endl;
    }
    return 0;
}
