 #include<stdio.h>
 int num(){
    int n;
    printf(" upto you want to check \n");
    scanf("%d",&n);
    return n;
 }
 void check(int a,int i){ 
    if(a==0){
        printf(" even numbers are %d \n",i);
    }
    else {
        printf(" odd numbers are %d \n",i);
    }
 }
 int main(){
    int a,n,i;
  n=num();
    for(i=1;i<=n;i++){
        a=i%2;
        check(a,i);

    }
return 0;
 }