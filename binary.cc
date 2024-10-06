#include<stdio.h>
int main(){
    int n,i=0,r,b=0,base=1;
    printf("Enter value of n\n");
    scanf("%d",&n);

    while(n>0){r=n%2;
     b=b+r*base;
     n=n/2;
     base=base*10;
    }
    printf("%d",b);

    return 0;

}