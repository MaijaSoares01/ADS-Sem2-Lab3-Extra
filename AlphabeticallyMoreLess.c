#include <stdio.h>
#include <string.h>
int main(){
	char name1[10] = "Anne";
	char name2[10] = "Zelda";
	
	if(strcmp(name1, name2)<0)
	printf("%s is alphabetically less than %s\n",name1, name2);
	if(strcmp(name2, name1)>0)
	printf("%s is alphabetically more than %s\n",name2, name1);
	return 0;
}
