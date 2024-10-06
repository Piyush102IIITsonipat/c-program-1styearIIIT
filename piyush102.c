#include <stdio.h>
int main()
{ int score;
printf("enter your score\n");
scanf("%d",&score);

if(score>=50){
    printf("your grade is A");
}
        else if (score>40){
        printf("your grade is B");
    }
    else if (score>30){
        printf("your grade is C");
    }
        else {
            printf("you are failed");
        }
    

    return 0;
 }
   
