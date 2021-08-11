#include <stdio.h>
#include <string.h>

int main(){
	
	char moduleName[20];
	char shortName[3];
	
	strcpy(moduleName, "Algorithms2");
	printf("Module = %s\n",moduleName);
	shortName[0] = moduleName[0];
	shortName[1] = moduleName[strlen(moduleName - 1)];
	shortName[2] = '\0';
	printf("Short name = %s\n", shortName);
	shortName[0] = moduleName[0];
	shortName[1] = moduleName[strlen(moduleName) - 1];
	shortName[2] = '\0';
	printf("Short name = %s\n", shortName);
	return 0;
}
