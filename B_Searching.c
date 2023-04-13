#include<stdio.h>
int main()
{
    int n,x,existing;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int j=0;j<n;j++){
        if(a[j]==x){
          existing=j;
          break;
        }else{
          existing=-1;
        }
    }
    printf("%d",existing);
    return 0;
}
