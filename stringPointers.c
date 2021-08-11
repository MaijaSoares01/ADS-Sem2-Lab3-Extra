#include <stdio.h>

int main() {
    
    char *months[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov", "Dec"};
	/*
      This is the same as 
      
      char months[12][4] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov", "Dec"};
    */
    

    printf ("The months of the year are \n");
    int j;
    for (j=0;j<12;j++)
        printf("%s\n", months[j]);
    
   
}
