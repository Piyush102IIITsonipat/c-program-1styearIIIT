 #include<stdio.h>
 int value(){ int num;
     printf("enter value of num\n");
    scanf("%d",&num);
    return num;
 }
 int main(){
    int num,max,min,i;
    num=value();
    max=min=num;

    for(i=1;i<5;i++){
        num=value();
        if(num>max){
            max=num;
        }
        if(num<min){
            min=num;
        }
    } printf("max is %d and min is %d",max,min);
    return 0;

 }