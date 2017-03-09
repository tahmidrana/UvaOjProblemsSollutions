#include <bits/stdc++.h>
#include <cstdio>
using namespace std;

int power(int n,int p){
    int res = 1;
    for(int i=0 ; i<p ; i++)
        res = res*n;
    return res;
}

bool isArmstrong(int n){
    int x = n,r = 0,m,o = log10(n)+1;
    while(n>0){
        m = n%10;
        r += power(m,o);
        n = n/10;
    }
    if(x==r)
        return true;
    else
        return false;
}

int main()
{
    int n,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        if(isArmstrong(n))
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }
    return 0;
}
