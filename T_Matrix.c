#include<stdio.h>
#include<stdlib.h>
int main()
{
   int n;
   scanf("%d",&n);
   long long int matrix[n][n];
   for(int i =0;i<n;i++){
    for(int j=0;j<n;j++){
        scanf("%lld",&matrix[i][j]);
    }
   }
   long long int primary_diagonal_sum =0; 
   long long int secondary_diagonal_sum =0;

    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                primary_diagonal_sum+=matrix[i][j];
            }
            if(i+j==n-1){
                secondary_diagonal_sum +=matrix[i][j];
            }
        }
    }
    long long int difference = primary_diagonal_sum - secondary_diagonal_sum;
    long long int absolute_difference = abs(difference);
    printf("%lld",absolute_difference);
    return 0;     
}