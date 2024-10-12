#include<stdio.h>
int max(int a,int b,int c,int d){
    int greatest=a;
     if(b>greatest){
         greatest= b;}
    else if(c>greatest){
         greatest=c;}
    else if(d>greatest){
         greatest=d; }
         return greatest;
}
int main(){
    int a,b,c,d,greatest;
    printf("enter numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("greatest number is\n");
    greatest=max(a,b,c,d);
    printf("%d",greatest);
    return 0;}