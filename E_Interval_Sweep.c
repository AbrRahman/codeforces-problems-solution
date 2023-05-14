#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int v;
    if(a!=0||b!=0){
        v = abs(a-b);
    }
    if(v>=0&&v<=1){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}