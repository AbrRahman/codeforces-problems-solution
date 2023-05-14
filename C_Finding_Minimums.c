#include<stdio.h>
#include<limits.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int nums[n];
    // input arr
    for(int i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }

  int l = 0;
    for(int i=0;i<n;i+=k){
       int min = INT_MAX;
      for(int j=l;j<i+k;j++){
        if(j==n){
            break;
        }
        if(min>nums[j]){
         min = nums[j];
       }
      }
      printf("%d ",min);
      l+=k;
    }
    return 0;
}