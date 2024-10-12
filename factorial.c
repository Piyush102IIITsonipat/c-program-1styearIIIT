#include<stdio.h>
int fact(int n){
    int z=1;
    while(n>1){
        z=z*n;
        n=n-1;}
        printf("factoral is %d",z);
}
int main(){
    int n,z;
    printf("enter number\n");
    scanf("%d",&n);
    if(n<0){
        printf("not valid number");}
    else if(n==0){
        printf("factorial is 1");}
  else { fact(n);}
  return 0;
}