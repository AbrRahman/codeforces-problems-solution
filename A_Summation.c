#include<stdio.h>
int main()
{
   long long int n,sum=0;
    scanf("%lld",&n);
    long long int a[n];
    for (int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int j=0;j<n;j++){
        sum+=a[j];
    }
    if(sum<0){
        sum = sum*-1;
    }
    printf("%lld\n",sum);
    return 0;
}