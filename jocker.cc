#include<stdio.h>
int main(){
    int salary; 
    int i=0;
   while(i<10){
     i=i+1;
  printf("your salary\n");
        scanf("%d\n",&salary);
        printf("value of i is %d%\n",i);
     printf("yoursalary%d\n",salary=salary+200);
      if(salary==1000){
         break;
      }
    }
return 0;}