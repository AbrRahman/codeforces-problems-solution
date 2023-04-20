#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n][101];
    for(int i=0;i<4;i++){
        scanf("%s",&s[i]);
        int len = strlen(s[i]);
        if(len>10){
            printf("%c%d%c\n",s[i][0],len-2,s[i][len-1]);
        }else{
             printf("%s\n",s[i]);
        }
    }

    return 0;
}