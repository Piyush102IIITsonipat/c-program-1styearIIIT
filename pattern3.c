#include<stdio.h>
int main(){
    int n,i,j;
    printf("enter value of n \n");
    scanf("%d",&n);
    for(i=0;i<5;i++){
        printf("%d",n);
    for(j=1;j<=i;j++){
        printf("%d",n-j);
    } printf("\n");
    }
    return 0;
}