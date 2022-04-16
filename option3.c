/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option3(Node *head)
{
	float quiz;
	float mid;
	float hw;
	float final;
	float current;
	int count=0;

	Node *p = NULL;	
	p = head;
	printHeader();
	while(p!=NULL){
		quiz+=p->Student.Cat1.Cumulative;
		mid+=p->Student.Cat2.Cumulative;
		hw+=p->Student.Cat3.Cumulative;
		final+=p->Student.Cat4.Cumulative;
		current+=p->Student.Current_Grade;

		printGrade(p);
		count++;
		p = p->next;
	
	}
	
	quiz/=count;
	mid/=count;
	hw/=count;
	final/=count;
	current/=count;
	
	printf("Class Averages for Quizzes: %.02f, Midterms: %.02f, Homework: %.02f, Final: %.02f, Current Grade: %.02f\n", quiz, mid, hw, final, current);
}
