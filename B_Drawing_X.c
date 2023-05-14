#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int mid_idx = floor(n/2);
    for(int i=0;i<n;i++){
         if(i==mid_idx){
              for(int j=0;j<n;j++){
                  if(j==mid_idx){
                    printf("X");
                  }else{
                    printf("*");
                  }
              }
         }else{
             for(int j=0;j<n;j++){
                  if(i==j){
                    printf("\\");
                  }else if(i+j==n-1){
                    printf("/");
                  }else{
                    printf("*");
                  }
              }
         }
     printf("\n");
    }
    return 0;
}
// \***/
// *\*/*
// **X**
// */*\*
// /***\