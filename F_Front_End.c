#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int i=0,j=n-1;
    while (i<=j)
    {
       if(i==j){
        printf("%d ",arr[i]);
       }else{
           printf("%d ",arr[i]);
           printf("%d ",arr[j]);
       }
       i++;
       j--;
    }
    
    return 0;
}
// 5
// 1 2 3 4 5
// output->1 5 2 4 3