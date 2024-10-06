#include<stdio.h>
#include<math.h>
int main(){
    int i,num,alpha=0;
    int result;
    for(i=1;i<=3;i++){
        printf("enter value in num\n");
        scanf("%d",&num);
        result=num*num*num;// when use result=pow(num,3); give error with 5 as cube of 5 is 125 but get 124 why?
        alpha+=result;
        printf("num is %d, result is %d, alpha is %d\n",num,result,alpha);
    } printf("overall sum is %d \n",alpha);
    return 0;
}