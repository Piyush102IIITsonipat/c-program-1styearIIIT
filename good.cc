  #include<stdio.h>
#include<math.h>
int root(float x,float y)
{ printf("x is %f,y is %f\n",x,y);
return 0;}
int main(){
float a,b,c,D,x,y,result;
printf("enter value of a,b,c\n");
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-(4*a*c);
if(D<0){
    printf("complex roots");
return 1;}
result=sqrt(D);
x=(-b+result)/(2*a);
y=(-b-result)/(2*a);
root(x,y);
return 0;
}