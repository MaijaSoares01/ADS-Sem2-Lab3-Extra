#include <stdio.h>
#include <string.h>

int main()
{
    char delay;
    
    char surname[30];
    
    printf("Enter your surname: ");
    gets(surname);
    puts(surname);
    //printf("Enter your surname: ");
    //scanf("%s ", &surname);
    // printf("%s ", surname);
    printf("There are %d chars in %s\n", strlen(surname), surname);
    printf("Module has been assigned to: \n");
    char module[50] = "Algorithms2";
    puts(module);
    printf("%s backwards is.....\n", surname);
    int begin, end, count = 0;
    char x[30];
    while (surname[count] != '\0')
      count++;
    
    end = count - 1;
    for (begin = 0; begin < count; begin++) {
      x[begin] = surname[end];
      end--;
   }
   x[begin] = '\0';

   printf("%s\n", x);
    
   }
