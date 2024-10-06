#include<stdio.h>
int main(){
    float n,i; float a,z=0;
    printf("enter value of n\n");
    scanf("%f",&n);
    for(i=1;i<=n;i++){
        a=1/i;
        z+=a;
        
    } printf("%.2f",z);
}