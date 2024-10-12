 #include<stdio.h>
 int main(){
    int i,j;
    char ch;
    printf("enter symbol\n");
    scanf(" %c",&ch);
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            if(i==0||i==3||j==0||j==4){
                printf(" %c",ch);}
                else {
                    printf("  ");
                }
            }
        printf("\n");}
   return 0; }
   
 