#include<stdio.h>
void print_n_to_one(int n){
    if(n==0)return;
    if(n==1){
        printf("%d",n);
    }else{
         printf("%d ",n);
    }
       print_n_to_one(n-1);
}
int main()
{
   int n;
   scanf("%d",&n);
   print_n_to_one(n);
   return 0;
}