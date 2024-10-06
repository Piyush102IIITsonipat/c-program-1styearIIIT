#include<stdio.h>
#include<math.h>
int root(float x,float y)
{ printf("x is %f,y is %f",x,y);}
int main(){
float a,b,c,D,x,y,result;
scanf("%f%f%f",&a,&b,&c);
D=(b*b)-4*a*c;
if(D<0){
    printf("complex roots");
}
result=pow(D,1/2);
x=(-b+result)/(2*a);
y=(-b-result)/(2*a);
root(x,y);
return 0;
}