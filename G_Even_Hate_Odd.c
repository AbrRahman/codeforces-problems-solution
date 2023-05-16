#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    
    for(int i=0;i<test;i++){
         int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    if(n%2==0){
         int even=0,odd=0;
       for(int i=0;i<n;i++){
        if(a[i]%2==0){
           even++;
        }else{
            odd++;
        }
     }
       int ans;
       if(even==odd){
         ans=0;
       }else if(even>odd){
          ans=n/2-odd;
       }else{
        ans=n/2-even;
       }
       printf("%d",ans);
    }else{
        printf("-1");
    }
    printf("\n");
    }
    return 0;
}