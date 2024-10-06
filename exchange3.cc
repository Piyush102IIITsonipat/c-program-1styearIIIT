#include<stdio.h>
int main(){  
int a,b;
printf("enter value of a and b\n");
scanf("%d\n%d",&a,&b);
a=a^b;
b=a^b;
a=a^b;
printf("the new value of a is %d and b is %d", a,b);
return 0;}



