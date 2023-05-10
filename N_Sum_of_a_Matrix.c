#include<stdio.h>
void fun(int row,int col,int a[row][col],int b[row][col],int result[row][col],int i,int j){
    if(i==row)return;
    result[i][j]=a[i][j]+b[i][j];
    j++;
    if(j==col){
        j=0;
        i++;
    }
  fun(row,col,a,b,result,i,j);
}
int main()
{  
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col],b[row][col],result[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
    fun(row,col,a,b,result,0,0);

     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}