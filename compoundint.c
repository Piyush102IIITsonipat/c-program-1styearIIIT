#include<stdio.h>
#include<math.h>
int main(){
    int i,n,p,t,result;
    printf("enter values\n");
    scanf("%d%d%d%d",&i,&n,&p,&t);
    result=pow((1+i/n),n*t);
    printf("%d",p*result);
    return 0;

}