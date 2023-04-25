#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11],c[21];
    scanf("%s %s",&a,&b);
    int lenA=strlen(a),lenB=strlen(b);
    for(int i=0;i<lenA;i++){
        c[i]=a[i];
    }
    int j=lenA;
    for(int i=0;i<=lenB;i++){
        c[j]=b[i];
        j++;
    }
    char temp =a[0];
    a[0]=b[0];
    b[0]=temp;
    printf("%d %d\n%s\n%s %s",lenA,lenB,c,a,b);
    return 0;
}