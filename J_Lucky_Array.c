#include<stdio.h>
#include<limits.h>
int main()
{ 
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
// find min element;
   int min = INT_MAX;
  for(int i=0;i<n;i++){
      if(arr[i]<min){
       min = arr[i];
      }
    }
    // count min element
    int count =0;
    for(int i=0;i<=n;i++){
       if(arr[i]==min){
        count++;
       }
    }
    if(count%2==1){
        printf("Lucky");
    }else{
          printf("Unlucky");
    }
    return 0;
}
// hoi nai karon frequency array max num jana ni;
// #include<stdio.h>
// int main()
// { 
//     int n;
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//       scanf("%d",&arr[i]);
//     }
//     int count[10]={0};
//      for(int i=0;i<n;i++){
//        count[arr[i]]++;
//     }
//     int min_element;
//     for(int i=0;i<=10;i++){
//        if(count[i]!=0){
//         min_element = count[i];
//         break;
//        }
//     }
//     if(min_element%2==1){
//         printf("Lucky");
//     }else{
//           printf("Unlucky");
//     }
//     return 0;
// }