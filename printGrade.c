/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printGrade(Node *address)
{
	Node *p = address;

	/*Output student_name and student_ID*/
	printf("%23s %d\t", p->Student.student_name, p->Student.student_ID);
	/*Output Cat1*/
	printFloat(p->Student.Cat1.score1);
	printFloat(p->Student.Cat1.score2);
	printFloat(p->Student.Cat1.score3);
	printFloat(p->Student.Cat1.Cumulative);
	/*Output Cat2*/
	printFloat(p->Student.Cat2.score1);
	printFloat(p->Student.Cat2.score2);
	printFloat(p->Student.Cat2.score3);
	printFloat(p->Student.Cat2.Cumulative);
	/*Output Cat3*/
	printFloat(p->Student.Cat3.score1);
	printFloat(p->Student.Cat3.score2);
	printFloat(p->Student.Cat3.score3);
	printFloat(p->Student.Cat3.Cumulative);
	/*Output Cat4*/
	printFloat(p->Student.Cat4.score1);
	printFloat(p->Student.Cat4.score2);
	printFloat(p->Student.Cat4.score3);
	printFloat(p->Student.Cat4.Cumulative);
	/*Output Current_Grade*/
	printFloat(p->Student.Current_Grade);
	/*Output Final_Grade*/
	printFloat(p->Student.Final_Grade);
	printf("\n\n");
}
