/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */
#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void option2(Node *head)
{
	char lastName[40];
	int i;
	int ID[100];
	int count = 0;
	Node *temp = NULL;
	Node *p = NULL;
	p = head;
	
	/* get student's last name to use from user */
	printf("Enter the Student's Last Name: ");
	scanf("%s", lastName);
	printf("Hunting for %s\n", lastName);

	/* Output the result of finding */
	while(p!=NULL){
			if(strstr(p->Student.student_name, lastName)){
				ID[count]=p->Student.student_ID;
				count++;
			}
			p = p->next;
	}
	if(count>1){
			printf("There is more than one student by that name.\n");
			for(i=0;i<count;i++){
				temp = findNodeID(head, ID[i]);
				printf("%d) %s\n", i+1, temp->Student.student_name);
			}
			printf("Please indicate which student you want: ");
			scanf("%d", &i);
			temp = findNodeID(head, ID[i-1]);
			printHeader();
			printGrade(temp);
				
	}
	if(count==1){
		temp = findNodeID(head, ID[0]);
		printHeader();
		printGrade(temp);
	}
	if(count<1) printf("\nERROR: Student last name %s was not found in the list\n",lastName);
}
