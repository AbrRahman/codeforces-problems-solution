#include<stdio.h>
// long long int sum(long long int l,long long int r){
//     if(l>r) return 0;
//     long long int mySum = sum(l+1,r);
//     return mySum+l;
// }
int main()
{
    int test;
    scanf("%d",&test);
        for(int j =1;j<=test;j++){
         long long int l,r;
        scanf("%lld %lld",&l,&r);
        long long int x;
        long long int sum;
        if(r>=l){
          x = r-l+1;
          sum = (x*1.0/2)*(2*l+(x-1));
        }else{
          x = l-r+1;
          sum = (x*1.0/2)*(2*r+(x-1));
        }

        printf("%lld\n",sum);

     }
      
    // long long int x = sum(l,r);
    // printf("%lld",x);




    //     for(int j =1;j<=test;j++){
    //         long long int l,r;
    //     scanf("%lld %lld",&l,&r);
    //     long long int sum =0;
    //     for(long long int i=l;i<=r;i++){
    //         sum+=i;
    //     }
    //     printf("%lld\n",sum);
    //  }
     return 0;
}