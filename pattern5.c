 #include<stdio.h>
int main(){
    char ch; int i,j,k;
    printf("enter the symbol\n");
    scanf(" %c",&ch);
    for(i=1;i<=5;i++){
        for(k=5;k>i;k--){
            printf("  ");
        }
        for(j=1;j<=i;j++){
            printf(" %c",ch);
        }
        printf("\n");
    }
    return 0;
}