 #include<stdio.h>
#include<math.h>
int main(){
 float x,b,i=0;
 float result,angle;
 char F;
do{ printf("enter value of x\n");
 scanf("%f",&x);
 printf("enter the function\n");
 scanf(" %c",&F);
 switch(F){
    case 's':
    printf("enter value of angle as x=0\n");
    scanf("%f",&angle);
    angle=angle*3.14/180;
    printf("%.2f",sin(angle));
    break;
    case 'c':
    printf("enter value of angle as x=0\n");
    scanf("%f",&angle);
    angle=angle*3.14/180;
    printf("%.2f",cos(angle));
    break;
    case 'l':
   if(x>0){
    printf("%.2f",log(x));}
   else { printf("not define value of x");}
    break;
    case 'p':
    printf("enter value of base b");
    scanf("%f",&b);
    result=pow(b,x);
    printf("%.2f",result);
    break;
    case 'q':
    printf("%.2f",x*x);}
    i=i+1;
    printf("\n");
}while(6>i);
 

return 0; }
