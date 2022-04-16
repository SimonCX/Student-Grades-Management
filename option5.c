/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option5(Node *head)
{
	float score;
	float cum;
	int count;
	Node *p = NULL;
	p = head;

	while(p!=NULL){
	/* Student name */
	printf("Student Name: %20s\t", p->Student.student_name);

	/* Cat1 part */
	cum = 0;
	count = 0;
	if(p->Student.Cat1.score1>=0){
		cum+=p->Student.Cat1.score1;
		count++;
	}
	if(p->Student.Cat1.score2>=0){
		cum+=p->Student.Cat1.score2;
		count++;
	}
	if(p->Student.Cat1.score3>=0){
		cum+=p->Student.Cat1.score3;
		count++;
	}
	
	if(count>0)
	p->Student.Cat1.Cumulative = cum/count;
	else
	p->Student.Cat1.Cumulative = -1;

	printf("Quizzes Cumlative: %.2f\t", p->Student.Cat1.Cumulative);

	/* Cat2 part */
	cum = 0;
	count = 0;
	if(p->Student.Cat2.score1>=0){
		cum+=p->Student.Cat2.score1;
		count++;
	}
	if(p->Student.Cat2.score2>=0){
		cum+=p->Student.Cat2.score2;
		count++;
	}
	if(p->Student.Cat2.score3>=0){
		cum+=p->Student.Cat2.score3;
		count++;
	}
	

	if(count>0)
	p->Student.Cat2.Cumulative = cum/count;
	else
	p->Student.Cat2.Cumulative = -1;

	printf("Midterms Cumlative: %.2f\t", p->Student.Cat2.Cumulative);

	/* Cat3 part */
	cum = 0;
	count = 0;
	if(p->Student.Cat3.score1>=0){
		cum+=p->Student.Cat3.score1;
		count++;
	}
	if(p->Student.Cat3.score2>=0){
		cum+=p->Student.Cat3.score2;
		count++;
	}
	if(p->Student.Cat3.score3>=0){
		cum+=p->Student.Cat3.score3;
		count++;
	}

	if(count>0)
	p->Student.Cat3.Cumulative = cum/count;
	else
	p->Student.Cat3.Cumulative = -1;

	printf("Homowork Cumlative: %.2f\t", p->Student.Cat2.Cumulative);

	/* Cat4 part */
	cum = 0;
	count = 0;
	if(p->Student.Cat4.score1>=0){
		cum+=p->Student.Cat4.score1;
		count++;
	}
	if(p->Student.Cat4.score2>=0){
		cum+=p->Student.Cat4.score2;
		count++;
	}
	if(p->Student.Cat4.score3>=0){
		cum+=p->Student.Cat4.score3;
		count++;
	}
	

	if(count>0)
	p->Student.Cat4.Cumulative = cum/count;
	else
	p->Student.Cat4.Cumulative = -1;

	printf("Final Cumlative: %.2f\t", p->Student.Cat4.Cumulative);

	/* Current_grade part */
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

	printf("Current Grade is: %.2f\n", p->Student.Current_Grade);


	/* Final_Grade part */
	p->Student.Final_Grade = -1;
		

	p = p->next;
	}
}
