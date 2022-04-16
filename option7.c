/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option7(Node *head)
{
	float cum;
	float score;

	Node *p = NULL;	
	p = head;

	while(p!=NULL){
	score = p->Student.Cat1.Cumulative;
	cum = 0;
	if(score!=-1)
	cum+=score*0.15;		

	score = p->Student.Cat2.Cumulative;
	if(score!=-1)
	cum+=score*0.30;		

	score = p->Student.Cat3.Cumulative;
	if(score!=-1)
	cum+=score*0.20;		

	score = p->Student.Cat4.Cumulative;
	if(score!=-1)
	cum+=score*0.35;
		
		
	p->Student.Final_Grade = cum;
	
	p = p->next;
	}
	option3(head);
}
