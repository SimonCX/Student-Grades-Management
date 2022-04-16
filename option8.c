/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *option8(Node *head)
{
	char name[40];
	char *find;
	int newID;
	float score;
	Node *p;
	int j;
	int cum;
	int run;
	
	printf("Enter the Student's Name: ");
	getchar();
	fgets(name, 40, stdin);
	find = strchr(name, '\n');
		if(find)
		*find = '\0';
	run = 1;
	while(run!=0){
	printf("Enter the Student's ID Number: ");
	scanf("%d", &newID);
	j = ID_isduplicate(head, newID);
		if(j!=1){
			run = 0;
			p = (Node*)malloc(sizeof(Node));

			/* Student name */
			strcpy(p->Student.student_name, name);
			/* Student iD */
			p->Student.student_ID = newID;
			/* Cat1 */
			cum = 0;
			j = 0;
			printf("Enter first Quizzes score (use -1 if there is no score): ");
			scanf("%f", &score);

			p->Student.Cat1.score1 = score;
			if(score>=0){
				cum += score;
				j++;}

		
			printf("Enter second Quizzes score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat1.score2 = score;
			if(score>=0){
				cum += score;
				j++;}

			printf("Enter third Quizzes score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat1.score3 = score;
			if(score>=0){
				cum += score;
				j++;}

			/* Cat1 Cumulative */
			if(j>0)
			p->Student.Cat1.Cumulative = cum/j;
			else
			p->Student.Cat1.Cumulative = -1;

			/* Cat2 */
			cum = 0;
			j = 0;
			printf("Enter first Midterms score (use -1 if there is no score): ");
			scanf("%f", &score);

			p->Student.Cat2.score1 = score;
			if(score>=0){
				cum += score;
				j++;}

		
			printf("Enter second Midterms score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat2.score2 = score;
			if(score>=0){
				cum += score;
				j++;}

			printf("Enter third Midterms score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat2.score3 = score;
			if(score>=0){
				cum += score;
				j++;}

			/* Cat2 Cumulative */
			if(j>0)
			p->Student.Cat2.Cumulative = cum/j;
			else
			p->Student.Cat2.Cumulative = -1;

			/* Cat3 */
			cum = 0;
			j = 0;
			printf("Enter first Homework score (use -1 if there is no score): ");
			scanf("%f", &score);

			p->Student.Cat3.score1 = score;
			if(score>=0){
				cum += score;
				j++;}

		
			printf("Enter second Homework score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat3.score2 = score;
			if(score>=0){
				cum += score;
				j++;}

			printf("Enter third Homework score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat3.score3 = score;
			if(score>=0){
				cum += score;
				j++;}

			/* Cat3 Cumulative */
			if(j>0)
			p->Student.Cat3.Cumulative = cum/j;
			else
			p->Student.Cat3.Cumulative = -1;

			/* Cat4 */
			cum = 0;
			j = 0;
			printf("Enter first Final score (use -1 if there is no score): ");
			scanf("%f", &score);

			p->Student.Cat4.score1 = score;
			if(score>=0){
				cum += score;
				j++;}

		
			printf("Enter second Final score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat4.score2 = score;
			if(score>=0){
				cum += score;
				j++;}

			printf("Enter third Final score (use -1 if there is no score): ");
			scanf("%f", &score);
			
			p->Student.Cat4.score3 = score;
			if(score>=0){
				cum += score;
				j++;}

			/* Cat4 Cumulative */
			if(j>0)
			p->Student.Cat4.Cumulative = cum/j;
			else
			p->Student.Cat4.Cumulative = -1;

			/* Current_Grade */
			score = p->Student.Cat1.Cumulative;
			cum = 0;
			if(score!=-1)
			cum+=score*0.15;
			else cum+=15;
		

			score = p->Student.Cat2.Cumulative;
			if(score!=-1)
			cum+=score*0.30;
			else cum+=30;
		

			score = p->Student.Cat3.Cumulative;
			if(score!=-1)
			cum+=score*0.20;
			else cum+=20;
			

			score = p->Student.Cat4.Cumulative;
			if(score!=-1)
			cum+=score*0.35;
			else cum+=35;
				
			p->Student.Current_Grade = cum;

			/*Final_Grade*/
			p->Student.Final_Grade = -1;
			
			p->next = head;
			head = p;
			printf("%s, Student ID# %d has been added with the following information: \n", name, newID);
			
			printHeader();
			printGrade(p);
			
			return head;

		} else {printf("Student ID Number entered was a duplicate.\n");
		}
			
	}
}
