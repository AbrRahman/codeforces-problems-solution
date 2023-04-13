#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int j=0;j<n;j++){
        if(a[j]<=10){
            printf("A[%d] = %d\n",j,a[j]);
        }
    }
    return 0;
}