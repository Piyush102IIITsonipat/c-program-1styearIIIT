#include<stdio.h>
int inc(int a,int b){
    printf("%d",a+=b);
}
int dec(int a,int b){
    printf("%d",a-=b);
}
int mult(int a,int b){
    printf("%d",a*=b);
}
int rem(int a,int b){
    printf("%d",a%=b);
}
int main(){
    int a,b;
    char ch;
    printf("enter value of a & b\n");
    scanf("%d%d",&a,&b);
    printf("enter ch\n");
    scanf(" %c",&ch);
    if(ch=='i'){
        inc(a,b);}
    else if(ch=='d'){
        dec(a,b);
    }
    else if(ch=='m'){
        mult(a,b);
    }
    else if(ch=='r'){
        rem(a,b);
    }

    }
