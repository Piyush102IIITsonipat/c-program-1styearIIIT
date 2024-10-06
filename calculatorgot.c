#include<stdio.h>
int main(){
    int a,b;
    char ch;
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("enter value of operator\n");
    scanf(" %c",&ch);
    if(ch=='+')
    goto Plus;
    else if(ch=='-')
    goto minus;
    else if(ch=='*')
    goto Multiply;
    else if(ch=='/')
    goto divide;

    Plus:
    printf("a+b=%d",a+b);
    return 0;
    minus:
    printf("a-b=%d",a-b);
    return 0;
    Multiply:
    printf("a*b=%d",a*b);
    return 0;
    divide:
    printf("a/b=%d",a/b);
    return 0;
}