#include<stdio.h>
 void print_number(int n){
    for(int i=1;i<=n;i++){
        if(i<n){
           printf("%d ",i);
        }else{
            printf("%d",i);
        }
     
    }
 };
int main ()
{
    int n;
    scanf("%d",&n);
    print_number(n);
    return 0;
}