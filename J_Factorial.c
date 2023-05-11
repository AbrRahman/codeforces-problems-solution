#include<stdio.h>
long long int factorial(int n,int i){
    if(i>n) return 1;
    long long int num = factorial(n,i+1);
    return num * i;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int ans= factorial(n,1);
    printf("%lld",ans);
    return 0;
}