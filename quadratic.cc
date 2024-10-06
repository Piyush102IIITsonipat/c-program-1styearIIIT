#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,D,x,y,result;
    printf("enter value of a,b,c\n");
    scanf("%f%f%f",&a,&b,&c);
    D=(b*b)-4*(a*c);
    result=sqrt(D);
    x=(-b+result)/(2*a);
    y=(-b-result)/(2*a);
    printf("x is %f, y is %f\n",x,y);

    return 0;

}