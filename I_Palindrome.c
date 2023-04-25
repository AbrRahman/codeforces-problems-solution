#include<stdio.h>
#include<string.h>
int main()
{
   char str[1001];
   scanf("%s",&str);
   int ans=0;
   int i=0,j=strlen(str)-1;
    while (i<=j)
    {
      if(str[i]==str[j]){
        ans=1;
      }else if(str[i]!=str[j]){
        ans=0;
      }
      i++;
      j--;
    }
     if(ans==1){
          printf("YES");
     }else{
          printf("NO");
     }
    return 0;
}