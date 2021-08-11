#include <stdio.h>

int main() {
    
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov", "Dec"};
	/*
      This is the same as 
      
      char months[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov", "Dec"};
    */
    int n = sizeof(months) / sizeof(months[0]);
 
    printf ("The months of the year are \n");
    int j;
    for (j=0;j<12;j++)
        printf("%s\n", months[j]);
    printf ("The months of the year backwards are \n");
    char* temp; 
    int x = n - 1; 
    int i;
    for (i = 0; i < x; i++) { 
        temp = months[i]; 
        months[i] = months[x]; 
        months[x] = temp; 
        x--; 
    }
    for (i = 0; i < n; i++) { 
        printf("%s ", months[i]); 
    }
   
}
