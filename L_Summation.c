#include<stdio.h>
long long int arr_sum(long long int arr[],int n,int i,long long int sum){
    if(i==n)return sum;
       sum = sum+arr[i];
    arr_sum(arr,n,i+1,sum);

}
int main()
{
     int n;
    long long int sum =0;
    scanf("%d",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
 long long int x= arr_sum(arr,n,0,sum);
       printf("%lld",x);
    return 0;
}