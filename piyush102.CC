#include <stdio.h>
int main()
{  char ch;
printf("Enter value of ch\n");
scanf("%c",&ch);

switch(ch){
    case 'a':
    case 'A':
        printf("%c is for anmol\n",ch);
        break;
    case 'b':
    case 'B':
      printf("%c is for Bheem \n",ch);
}

return 0;
}