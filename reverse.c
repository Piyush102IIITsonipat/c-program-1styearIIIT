#include<stdio.h>
int main(){
    int n,i=0;
    printf("enter value of a\n");
    scanf("%d",&n);
    while(n>i){
        printf("%d",n%10);
        n=n/10;
        i=i+1;
        if(n==1){
            printf("%d",n);
        }
    }
        return 0;
    }
