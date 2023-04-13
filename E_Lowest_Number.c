#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int lowNum,index=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int j=0;j<n;j++){
         if(j==0){
            lowNum=arr[j];;
         }
         if(lowNum>arr[j]){
            lowNum=arr[j];
            index = j+1;
         }
    }
    printf("%d %d\n",lowNum,index);
}