#include <stdio.h>
#include<unistd.h>

int main() {

	char name[30];
	int class1;
	char section;
	int m,e,h,s,ss;


	printf("Enter student name:");
	scanf("%[^\n]%*c",name);
	
	printf("\nEnter student standard:");
	scanf("%d",&class1);
	
	while((getchar())!='\n');
	
	printf("\nEnter student section:");
	scanf("%c",&section);
	
	
	printf("\nMarks secured in Mathematics:");
	scanf("%d",&m);
	
	printf("\nMarks secured in English:");
	scanf("%d",&e);
	
	printf("\nMarks secured in Hindi:");
	scanf("%d",&h);
	
	printf("\nMarks secured in Science:");
	scanf("%d",&s);
	
	printf("\nMarks secured in Social Science:");
	scanf("%d",&ss);
	
	usleep(3000000);
	puts("_______________________________________________");
	puts("\tJawahar Navodaya Vidyalaya");
	puts("\t   Annual Report Card\t");
	printf("\tName: %s\n ",name);
	printf("\tStandard: %d\n",class1);
	printf("\tSection: %c\n\n",section);
	puts("\tMarks secured out of 100");
	printf("\tMathematics: %d\n",m);
	printf("\tEnglish: %d\n",e);
	printf("\tHindi: %d\n",h);
	printf("\tScience: %d\n",s);
	printf("\tSocial Science: %d\n\n",ss);


	int total;
	total = m+e+h+s+ss;
	
	
	printf("\tTotal marks secured: %d\n",total);

	if(total>500)
	{
		exit(0);
	}
	else if(total>=450 && total<=500)
	{
		printf("\tGrade: A\n");
	}
	else if(total>=400 && total<=449)
		{
			printf("\tGrade: B\n");
		}
	else if(total>=350 && total<=399)
		{
			printf("\tGrade: C\n");
		}
	else if(total>=300 && total<=349)
		{
			printf("\tGrade: D\n");
		}
	else if(total>=200 && total<=299)
		{
			printf("\tGrade: E\n");
		}
	else
	{
		printf("\tTotal marks secured below 200 but greater than equal to 0\n");
	}
	puts("_______________________________________________");


}

