 #include<stdio.h>
 int main(){
    int n,i;
    printf("enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            printf("factor is %d \n",i); }   }
return 0;
 }