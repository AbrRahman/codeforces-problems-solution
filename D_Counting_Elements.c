#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int count =0;
    for (int i = 0; i <n; i++){
        int flag =0;
        for(int j=0;j<n;j++){
            int x=a[i]+1;
            if(x==a[j]){
               flag =1;
            }
        }
        if(flag==1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
// 3
// 4 4 5
// 2 ->output