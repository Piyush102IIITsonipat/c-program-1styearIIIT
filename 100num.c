 #include<stdio.h>
 int num(int a){
    printf("enter value of a\n");
    scanf("%d",&a);
    return a;
 }
 int main(){
    int a,i=0;
    while(1){
       a= num(a);
        if(a>100){
            break;
        }
        i++;
    }
    return 0;
 }