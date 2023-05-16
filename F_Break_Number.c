#include<stdio.h>
#include<limits.h>
long long int divider(long long int x){
   if(x%2==1)return 0;
  long long int num = divider(x/2);
   return num+1;
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a;
    int num = INT_MIN;
    for(int i=0;i<n;i++){
        scanf("%lld",&a);
        long long int count = divider(a);
        if(num<count){
          num =count;
        }
    }
    printf("%d",num);
    
    return 0;
}



// #include<stdio.h>
// #include<limits.h>
// long long int divider(long long int x){
//    if(x%2==1)return 0;
//   long long int num = divider(x/2);
//    return num+1;
// }
// int max(int n,int b[n],int i){
//     if(i==n)return INT_MIN;
//     int ans = max(n,b,i+1);
//     if(ans<b[i]){
//         return b[i];
//     }else{
//         return ans;
//     }
// }
// int main()
// {
//     int n;
//     scanf("%d",&n);
//    long long int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int b[n];
//      for(int i=0;i<n;i++){
//         long long int x = divider(arr[i]);
//         b[i]=x;
//     }
//    int result = max(n,b,0);
//     printf("%d",result);
    
//     return 0;
// }














