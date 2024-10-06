#include<stdio.h>
int main(){
    int basic,da,ta,sum;
    printf("Your basic salary");
    scanf("%d",&basic);
    da=("%d",10*basic/100);
    ta=("%d",12*basic/100);
    sum=basic+da+ta;
    printf("%d+%d+%d is %d",basic,ta,da,sum);
    return 0;

}