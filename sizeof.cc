#include<stdio.h>
int main(){
char ch;
printf("enter ch \n");
scanf(" %c",&ch);

if(ch=='a'){
    printf("%lu\n",sizeof(char));
}
else if(ch=='b'){
    printf("%lu\n",sizeof(int));
}
else if(ch=='c'){
    printf("%lu\n",sizeof(long));
}
else if(ch=='d'){
    printf("%lu\n",sizeof(double));
}
return 0;}