#include <stdio.h>
#define EXAMS 3
#define STUDENTS 4

int main()
{
	int exams[STUDENTS][EXAMS];
	    
    //input the results	
    int i = 0;
    int j = 0;
	for (i = 0; i < STUDENTS; i++)
	{
        printf("Input the %d results for student %d \n", EXAMS, (i+1)); 
		for (j=0;j<EXAMS;j++)
			scanf("%d", &exams[i][j]);
	}
	
	printf("\n\n");
	
	//display the results	
	for (i = 0; i < STUDENTS; i++)
	{
        printf("The %d results for student %d are...\n", EXAMS, (i+1)); 
		for (j=0;j<EXAMS;j++)
			printf("%d%% ", exams[i][j]);
		printf("\n");
	}
	int examTotal;
	int avgGrade;
	int avgGrades[4];
	for (i = 0; i < STUDENTS; i++){
		examTotal = 0;
		for (j=0;j<EXAMS;j++){
		examTotal = examTotal + exams[i][j];
		}
		avgGrade = examTotal / 3;
		avgGrades[i]= avgGrade;
	}
	printf("GRADE AVERAGES:\n");
	for(i = 0; i < 4; i++)
    {
        printf("Student %d:\n",i+1);
        printf("%d \n", avgGrades[i]);
    }
	int k;
	printf("What student results would you like to see? (0-3)");
	scanf("%d",&k);
	for (j=0;j<EXAMS;j++)
			printf("%d%% ", exams[k][j]);
		printf("\n");
}
