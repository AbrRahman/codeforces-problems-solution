#include<stdio.h>
void print_digit(int n){
    if(n==0)return;
    int digit = n%10;
        n=n/10;
    print_digit(n);
  printf("%d ",digit);
}
int main()
{
    int test;
    scanf("%d",&test);
    for(int i=0;i<test;i++){
     int n;
     scanf("%d",&n);
     print_digit(n);
     if(n==0){
         printf("0");
     }
     printf("\n");
    }
    return 0;
}