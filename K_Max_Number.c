#include<stdio.h>
#include<limits.h>
 int maximum_num(int n,int arr[n],int i){
    if(i==n){
        return INT_MIN;
    }
    int ans = maximum_num(n,arr,i+1);
    if(arr[i]>ans){
        return arr[i];
    }else{
        return ans;
    }
 }
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i =0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    int ans =maximum_num(n,arr,0); 
    printf("%d",ans);
    return 0;
}


// #include<stdio.h>
// #include<limits.h>
//  int maximum_num(int n,int arr[n],int i,int max_num){
//     if(i==n){
//         return max_num;
//     }
//     if(arr[i]>max_num){
//         max_num =arr[i];
//     }
//     maximum_num(n,arr,i+1,max_num);
//  }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i =0;i<n;i++){
//        scanf("%d",&arr[i]);
//     }
//     int ans =maximum_num(n,arr,0,INT_MIN); 
//     printf("%d",ans);
//     return 0;
// }