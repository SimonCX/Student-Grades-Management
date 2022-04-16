/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void option1(Node *head)
{
	int StudentID;
	Node *p = NULL;
	p = head;

	/* get studentID to use from user	*/
	printf("Enter the Student ID #: ");
	scanf("%i", &StudentID);
	printf("Hunting for %d\n", StudentID);

	/*Output the result of finding*/
	while(p!=NULL){
			if(StudentID==p->Student.student_ID){
				printHeader();
				printGrade(p);				
				return;
			}
			p = p->next;
	}
	printf("\nERROR: Student ID number %i was not found in the list\n",StudentID);
}
