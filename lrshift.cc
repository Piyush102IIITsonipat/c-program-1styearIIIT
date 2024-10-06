#include<stdio.h>
int right(int a){
    printf("%d",a>>1);
}
int left(int a){
    printf("%d",a<<1);
}
int main(){ int a;
char ch;
    printf("enter value of a\n");
    scanf("%d",&a);
    printf("enter value of ch\n");
    scanf(" %c",&ch);
    if(ch=='l'){
        left(a);
    }
    else if(ch=='r'){
        right(a);
    }
    return 0;
}