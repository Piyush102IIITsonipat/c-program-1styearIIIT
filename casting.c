#include<stdio.h>
int divide(int a,int b){
    printf("%f",(float)a/b);
}
int main(){ int a,b;
    printf("enter value of a & b\n");
    scanf("%d%d",&a,&b);
    divide(a,b);
    return 0;
}