#include<stdio.h>
int main(){
    char ch; int i,j;
    printf("enter the symbol\n");
    scanf(" %c",&ch);
    for(i=0;i<5;i++){
        printf(" %c",ch);
        for(j=0;j<i;j++){
            printf(" %c",ch);
        }
        printf("\n");
    }
    return 0;
}