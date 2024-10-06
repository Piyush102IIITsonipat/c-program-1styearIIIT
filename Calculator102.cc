#include <stdio.h>
int main()
{
    float a,b;
    char  ch;

    
    printf("enter value in a \n ");
    scanf("%f", &a);
 
  printf("enter the operator\n");
   scanf(" %c",&ch);
   
   
   printf("enter value of b\n");
   scanf("%f", &b);
switch(ch){
    case '+':
    printf("a+b=\n%f", a+b);
    break;
case '-':
    printf("a-b=\n%f",a-b );
    break;
case '/':
    printf("a/b=%f",a/b);
    break;
case '*':
    printf("a*b=%f",a*b);
    break;

    return 0;


    
}
    
}