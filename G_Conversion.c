#include<stdio.h>
#include<string.h>
int main()
{
    char s[100001];
    scanf("%s",&s);
    int len = strlen(s);
    for(int i=0;i<=len;i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]+=32;
        }else if(s[i]>=97&&s[i]<=122){
            s[i]-=32;
        }else if(s[i]==44){
            s[i]=32;
        }
    }
    printf("%s",s);
    return 0;
}