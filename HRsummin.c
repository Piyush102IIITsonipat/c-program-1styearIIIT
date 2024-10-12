 #include<stdio.h>
 int sum(int a,int b){
     return a+b;
 }
 int minus(int a,int b){
     return a-b;
 }
 int main(){
     int a,b,z;
     char ch;
     printf("enter a & b\n");
     scanf("%d%d",&a,&b);
     printf("enter operator(+or-)\n");
     scanf(" %c",&ch);
     if(ch=='+'){
         z=sum(a,b);
         printf("%d",z);
     }
     else if(ch=='-'){
         z=minus(a,b);
         printf("%d",z);
     }
     else {
        printf("Invalidoperator");
     }
 return 0;}