/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */

#include "lab4.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Node *readData(char *fileName)
{	
	int j;
	float score;
	float cum;
	char *find;
	Node *head;
	Node *p;
	FILE *out = NULL;
	char buff[40];
	int times = 0; 
	
	head = NULL;
	out = fopen(fileName, "r");
	fgets(buff, 40, (FILE*)out);
	while(fgets(buff, 40, (FILE*)out)!=0){
		
		p = (Node*)malloc(sizeof(Node));
		/*Student name*/
		find = strchr(buff, '\n');
		if(find)
			*find = '\0';
		strcpy(p->Student.student_name, buff);
		
		/*Student ID*/
		fscanf(out, "%d", &j);
		p->Student.student_ID = j;

		/*Cat_Grade Cat1*/
		j=0;
		cum=0;
		fscanf(out, "%f", &score);
		p->Student.Cat1.score1 = score;
		if(score>=0){
			cum += score;
			j++;
		}		
		fscanf(out, "%f", &score);
		p->Student.Cat1.score2 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		fscanf(out, "%f", &score);
		p->Student.Cat1.score3 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		/*Cat1 Cumulative*/
		if(j>0)
		p->Student.Cat1.Cumulative = cum/j;
		else
		p->Student.Cat1.Cumulative = -1;

		/*Cat_Grade Cat2*/
		j=0;
		cum=0;
		fscanf(out, "%f", &score);
		p->Student.Cat2.score1 = score;
		if(score>=0){
			cum += score;
			j++;
		}		
		fscanf(out, "%f", &score);
		p->Student.Cat2.score2 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		fscanf(out, "%f", &score);
		p->Student.Cat2.score3 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		/*Cat2 Cumulative*/
		if(j>0)
		p->Student.Cat2.Cumulative = cum/j;
		else
		p->Student.Cat2.Cumulative = -1;
	
		/*Cat_Grade Cat3*/
		j=0;
		cum=0;
		fscanf(out, "%f", &score);
		p->Student.Cat3.score1 = score;
		if(score>=0){
			cum += score;
			j++;
		}		
		fscanf(out, "%f", &score);
		p->Student.Cat3.score2 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		fscanf(out, "%f", &score);
		p->Student.Cat3.score3 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		/*Cat3 Cumulative*/
		if(j>0)
		p->Student.Cat3.Cumulative = cum/j;
		else
		p->Student.Cat3.Cumulative = -1;

		/*Cat_Grade Cat4*/
		j=0;
		cum=0;
		fscanf(out, "%f", &score);
		p->Student.Cat4.score1 = score;
		if(score>=0){
			cum += score;
			j++;
		}		
		fscanf(out, "%f", &score);
		p->Student.Cat4.score2 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		fscanf(out, "%f", &score);
		p->Student.Cat4.score3 = score;
		if(score>=0){
			cum += score;
			j++;
		}
		/*Cat4 Cumulative*/
		if(j>0)
		p->Student.Cat4.Cumulative = cum/j;
		else
		p->Student.Cat4.Cumulative = -1;

		/*Current_Grade*/
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

		/*Move to Next Node*/
		p->next = head;
		head = p;
		fgets(buff, 40, (FILE*)out);
		times++;
	}
	fclose(out);
	p = head;
	head = head->next;
	free(p);
	printf("A total of %d student records were read from the file class_records\n\n", times-1);
	return head;
}

