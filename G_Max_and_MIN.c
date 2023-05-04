#include<stdio.h>
 void min_max(int arr[],int n){
    int min=100001,max=-1;
        for(int i=0;i<n;i++){
            if(min>arr[i]){
                min=arr[i];
            }
            if(max<arr[i]){
                max=arr[i];
            }
        }
        printf("%d %d",min,max);
 }
int main ()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min_max(arr,n);
    return 0;
}