#include <string.h>
#define SIZE 5

int main()
{
    char strings[SIZE][70],temp[70];
    int index, indexOfLongest, indexOfShortest;
    int longestLength = 0;
    int shortestLength = 100;
    char pause;
    
    for (index=0; index < SIZE; index ++) {
        printf("Enter string %d: ", index+1);
        gets(strings[index]);
    } //end for
    int j;
	for(index=0; index < SIZE; index ++)
      for(j=index+1;j<SIZE;j++){
         if(strcmp(strings[index],strings[j])>0){
            strcpy(temp,strings[index]);
            strcpy(strings[index],strings[j]);
            strcpy(strings[j],temp);
         }
      }
      printf("Order of Sorted Strings:\n");
   for(index=0; index < SIZE; index ++)
      puts(strings[index]);
	for (index = 0; index < SIZE; index++) {
    if (strlen(strings[index]) > longestLength) {
       longestLength = strlen(strings[index]);
       indexOfLongest = index;
     } //end if
	}//end for
	
	for (index = 0; index < SIZE; index++) {
    if (strlen(strings[index]) < shortestLength) {
       shortestLength = strlen(strings[index]);
       indexOfShortest = index;
     } //end if
	}//end for

	printf("The longest string is %s with %d characters\n", strings[indexOfLongest], longestLength);
	printf("The shortest string is %s with %d characters\n", strings[indexOfShortest], shortestLength);

} 
