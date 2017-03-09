#include <string.h>
#include <stdio.h>
int main()
{
    char s[10000];
    int len,count,i;
    while(gets(s)){
        len=0,count=0;
        if(s[0]=='*')
            break;
        for(i=0 ; i<strlen(s) ; i++){
            if(s[i]==32)
                len++;
        }
        for(i=0 ; i<strlen(s) ; i++){
            if(s[i]==32 && (s[i+1]==s[0]-32 || s[i+1]==s[0]+32 || s[i+1]==s[0])){
                count++;
            }
        }
        if(count==len)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
