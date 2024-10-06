#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value of a and b\n");
    scanf("%d\n%d",&a,&b);

    c=a;
    a=b;
    b=c;

    printf("new value of a is %d and b is %d",a,b);
    return 0;
}