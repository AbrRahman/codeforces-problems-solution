#include<stdio.h>
int voileCount(char str[],int i){
     if(str[i]=='\0')return 0;
     int ans = voileCount(str,i+1);
     if(str[i]>='A'&&str[i]<='Z'){
        str[i]=str[i]+32;
     }
     if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        return ans +1;
     }else{
        return ans;
     }
}
int main()
{
    char str[201];
    fgets(str,201,stdin);
   int v= voileCount(str,0);
   printf("%d",v);
    return 0;
}