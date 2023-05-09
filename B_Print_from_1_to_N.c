#include<stdio.h>
void print_number(int n,int i){
    if(i==n+1)return;
     printf("%d\n",i);
     print_number(n,i+1);
}
int main()
{
    int n;
    scanf("%d",&n);
    print_number(n,1);
    return 0;
}