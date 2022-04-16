/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */


#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *option10(Node *head, char* newFile)
{
	int count;	
	Node *p;
	Node *temp;
	FILE *in = NULL;
		
	p = head;
	count = 0;
	in=fopen(newFile,"w");
	while(p!=NULL){
		temp = p;
		fputs("Quizzes Midterms Homework Final\n", in);
		/*Put student name in*/
		fprintf(in, "%s", p->Student.student_name);
		fputs("\n", in);
		/*Put student id in*/
		fprintf(in, "%d", p->Student.student_ID);
		fputs("\n", in);
		/*Put student cat1 in*/
		fprintf(in, "%.00f\t%.00f\t%.00f\n", p->Student.Cat1.score1, p->Student.Cat1.score2, p->Student.Cat1.score3);
		/*Put student cat2 in*/
		fprintf(in, "%.00f\t%.00f\t%.00f\n", p->Student.Cat2.score1, p->Student.Cat2.score2, p->Student.Cat2.score3);
		/*Put student cat3 in*/
		fprintf(in, "%.00f\t%.00f\t%.00f\n", p->Student.Cat3.score1, p->Student.Cat3.score2, p->Student.Cat3.score3);
		/*Put student cat4 in*/
		fprintf(in, "%.00f\t%.00f\t%.00f\n", p->Student.Cat4.score1, p->Student.Cat4.score2, p->Student.Cat4.score3);
		
		p = p->next;
		free(temp);
		count++;
	}	
	printf("A total of %d student records were written to file %s\n", count, newFile);
}
