 #include<stdio.h>
 int main(){
     int a,i,flag=1;
     printf("enter the number\n");
     scanf("%d",&a);
     if(a<=1){printf("not a prime ");
         return 0;
     }
for(i=2;i<=a/2;i++){
    if(a%i==0){
        flag=0;
        break;
    } }
    if(flag==1){printf("the number is a prime");}
    else {printf("number is not a prime ");}
 
     return 0;
 }