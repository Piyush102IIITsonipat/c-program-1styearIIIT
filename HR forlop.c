#include<stdio.h>
int name(int n){
    if(n==1){
        printf("one");
    }
    if(n==2){
        printf("two");
    }
    if(n==3){
        printf("three");
    }
    if(n==4){
        printf("four");
    }
    if(n==5){
        printf("five");
    }
    if(n==6){
        printf("six");
    }
    if(n==7){
        printf("seven");
    }
    if(n==8){
        printf("eight");
    }
    if(n==9){
        printf("nine");
    }
    return n;
    int main(){
        int a,b,n,z;
        printf("enter the domain of a & b");
        scanf("%d%d",&a,&b);
        for(i=0;i<=b;i++){
            n=a+i;
            if(b<10){
                z=name(n);
            }
            if(n%2==0&&a<b){
                printf("even");
            }
            if(n%2!=0){
                printf("odd");
            }
        }else{
            printf("invalid domain");
        }
    }

}