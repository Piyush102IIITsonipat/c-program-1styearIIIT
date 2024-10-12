 #include<stdio.h>
 #include<math.h>
 int main(){
    double a,b,c,alpha,n1,n2,n3,sum;
    printf("enter value of a,b,c\n");
    scanf("%lf%lf%lf",&a,&b,&c);
    n1=pow(a,3);
    n2=pow(b,3);
    n3=pow(c,3);
    sum=(a*100)+(b*10)+c;
    alpha=n1+n2+n3;
    printf("alpha is %lf and sum is %lf \n",alpha,sum);
    if(alpha == sum){
        printf("this is armstron number\n");}
        else {
            printf("not a armstron number\n");
        }
 return 0;   }
 