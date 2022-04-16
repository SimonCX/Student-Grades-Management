/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab4.h"



void printPrompt(){
	printf("\n");
	printf("Please enter an option between 1 and 10:		\n");
	printf("1)  Print Student Scores by Student ID			\n");
	printf("2)  Print Student Scores by Last Name			\n");
	printf("3)  Print Student Scores for All Students		\n");
	printf("4)  Recalculate Student Scores for a Single Student ID	\n");
	printf("5)  Recalculate All Student Scores			\n");
	printf("6)  Insert a score for a specific Student ID		\n");
	printf("7)  Calculate Final Grades				\n");
	printf("8)  Add a new student					\n");
	printf("9)  Delete a student					\n");
	printf("10) Exit Program					\n");

	printf("\nOption: ");
}

int main(int argc, char **argv)
{
	int i;
	int option;
	char **ip = argv;
	char *oldFile = *(ip+1);
	char *newFile = *(ip+2);
	Node *linkHead;
	int run = 1;
	FILE *out = NULL;
	
	printf("Reading student information from file \"%s\"\n", oldFile);	
	linkHead = readData(oldFile);
			
	while(run!=0){
		printPrompt();
		scanf("%d", &option);
		if(option<1||option>10){
			printf("Unvalid option!");
			continue;
		}
		switch(option)
		{
		case 1:
			option1(linkHead);	
			break;
		case 2:
			option2(linkHead);
			break;
		case 3:
			option3(linkHead);	
			break;
		case 4:
			option4(linkHead);	
			break;
		case 5:
			option5(linkHead);	
			break;
		case 6:
			option6(linkHead);	
			break;
		case 7:
			option7(linkHead);
			option3(linkHead);	
			break;
		case 8:
			linkHead = option8(linkHead);	
			break;
		case 9:
			linkHead = option9(linkHead);	
			break;
		case 10:
			option10(linkHead, newFile);
			run = 0;
			break;
		}
	}

	return 0;
}
