#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,k;
     for(int i=0;i<n;i++){
          
        if(arr[i]==0){
            k=i-1;
            while (j<k)
            {
               int temp =arr[j];
                 arr[j]=arr[k];
                  arr[k]=temp;
                  j++;
                  k--;
            }
            j=0;
        }
        
    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// 7
// 1 2 0 4 0 5 6
//output -> 4 0 1 2 0 5 6 