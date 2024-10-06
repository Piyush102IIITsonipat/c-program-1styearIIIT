#include <stdio.h>
int main()
{
    int a;
 
 printf("enter the value of a \n");
 scanf("%d", &a);


    switch(a){
        case 10: {
            printf("the a is > \n");
            break;
        }
       case 9: {
        printf("very small value \n");
        break;


       }
       default : {
        printf("there is a number");

       }

    }  
    return 0;
    }