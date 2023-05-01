#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int p = n-1,s=1;
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=p;j++){
            printf(" ");
        }
        for(int j=1;j<=s;j++){
            printf("*");
        }
        if(i<n){
            p--;
            s+=2;
        }else if(i==n){
          p;
          s;
        }else{
            p++;
            s-=2;
        }
        printf("\n");
    }
    return 0;
}