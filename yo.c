 #include<stdio.h>
int max(int a,int b,int c,int d){
    if(a>b&&a>c&&a>d){
        return a;}
    else if(b>a&&b>c&&b>d){
         return b;}
    else if(c>a&&c>b&&c>d){
         return c;}
    else if(d>a&&d>b&&d>c){
         return d; }
}
int main(){
    int a,b,c,d,greatest;
    printf("enter numbers\n");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("greatest number is\n");
    greatest=max(a,b,c,d);
    printf("%d",greatest);
    return 0;}