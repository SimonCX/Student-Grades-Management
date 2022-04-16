/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */

#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *option9(Node *head)
{
	int i;	
	int j;
	int studentID;
	char name[40];
	Node *p = NULL;
	Node *temp = NULL;
	Node *key = head;

	printf("Please enter the student ID  number you wish to delete, followed by enter. ");
	scanf("%d", &studentID);
	j = ID_isduplicate(head, studentID);
	if(j!=0){
		p = findNodeID(head, studentID);
		strcpy(name, p->Student.student_name);
		printf("Do you really want to delete student ID number %d, %s?", studentID, name);
		printf("If yes, enter 1.  If no, enter 2: ");
		scanf("%d", &i);
		if(i==1){
			if(key->Student.student_ID==studentID){
				temp = key;
				key = key->next;
				free(temp);
				
			}else{
				while(key->next!=NULL){
					if(key->next->Student.student_ID==studentID){
						temp = key->next;
						key->next = temp->next;
						free(temp);
					}
					key = key->next;
				}
			}

			printf("student ID number %d, %s has been deleted.\n", studentID, name);
			return key;
		} else return head;
			
		
		
	} else printf("No such Student ID.\n");
	return head;
}
