#include<stdio.h>
int great(){
    int a,b,c;
    printf("enter value of a,b,c\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){printf("a is greatest %d",a);}
    if(b>a && b>c){printf("b is greatest %d",b);}
    if(c>a && c>b){printf("c is greatest %d",c);}
    return a,b,c;}
    int main(){ int a,b,c;
        int x,y,z; great();
        
        if(x==a){x=(a>b?a:b) && (a>c?a:c);
        great();}
        if(y==b){y=(b>a?b:a) && (b>c?b:c);
        great;}
        if(z==c){z=(c>a?c:a) && (c>b?c:a);
        great();}
        return 0;
    }
