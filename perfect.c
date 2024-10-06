#include<stdio.h>
#include<math.h>
int main(){ 
    int a,n;
    printf("enter value of n\n");
    scanf("%d",&n);
    a=sqrt(n);
    if(a*a==n){
        printf("%d is perfect as %d",n,a);}
        else {
            printf("%d is not perfect",n);
        }
    

return 0;
}