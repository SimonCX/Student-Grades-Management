/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option6(Node *head)
{
	int studentID;
	int i;
	int score;
	float newScore;
	
	
	Node *tempHead = head;
	Node *p = NULL;

	printf("Enter the Student ID #: ");
	scanf("%d", &studentID);

	printf("Hunting for %d ", studentID);
	
	p = findNodeID(tempHead, studentID);

	printf("Insert a Score for %s? Enter 1, if yes. Enter 2, if no: ", p->Student.student_name);
	scanf("%d", &i);
	
	if(i==1){
		printf("Which category?\n");
		printf("1) Quizzes\n");
		printf("2) Midterms\n");
		printf("3) Homework\n");
		printf("4) Final\n");
		scanf("%d", &i);
		
		switch(i)
		{
		case 1:
			printf("Which score?\n");
			printf("Enter 1, 2, or 3\n");
			scanf("%d", &score);
			printf("Enter New Score: ");
			scanf("%f", &newScore);

			if(score==1)
			p->Student.Cat1.score1 = newScore;
			if(score==2)
			p->Student.Cat1.score2 = newScore;			
			if(score==3)
			p->Student.Cat1.score3 = newScore;



			break;
		case 2:
			printf("Which score?\n");
			printf("Enter 1, 2, or 3\n");
			scanf("%d", &score);
			printf("Enter New Score: ");
			scanf("%f", &newScore);
		
			if(score==1)
			p->Student.Cat2.score1 = newScore;
			if(score==2)
			p->Student.Cat2.score2 = newScore;			
			if(score==3)
			p->Student.Cat2.score3 = newScore;
			break;
		case 3:
			printf("Which score?\n");
			printf("Enter 1, 2, or 3\n");
			scanf("%d", &score);
			printf("Enter New Score: ");
			scanf("%f", &newScore);	
		
			if(score==1)
			p->Student.Cat3.score1 = newScore;
			if(score==2)
			p->Student.Cat3.score2 = newScore;			
			if(score==3)
			p->Student.Cat3.score3 = newScore;

			break;
		case 4:
			printf("Which score?\n");
			printf("Enter 1, 2, or 3\n");
			scanf("%d", &score);
			printf("Enter New Score: ");
			scanf("%f", &newScore);	

			if(score==1)
			p->Student.Cat4.score1 = newScore;
			if(score==2)
			p->Student.Cat4.score2 = newScore;			
			if(score==3)
			p->Student.Cat4.score3 = newScore;
			break;
		}
		printHeader();
		printGrade(p);
		printf("Note: Category Cums, Current Grade and Final Grade have noat been recalculated based on the new value enterd.\n");	

	} else return;
	

}
