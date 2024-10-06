#include<stdio.h>
int main(){
    int base,da,ta,sum;
    printf("your base salary ");
    scanf("%d",&base);
    da=base/10;
    ta=base/12;
    sum=base + ta + da ;
    printf("%d+%d+%d+sum is %d",base,ta,da,sum);
    return 0;
}