/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
 */

struct Cat_Grade{
	float score1;
	float score2;
	float score3;
	float Cumulative;
};
struct Data {
	char student_name[40]; 
	int student_ID;
	struct Cat_Grade Cat1;
	struct Cat_Grade Cat2;
	struct Cat_Grade Cat3;
	struct Cat_Grade Cat4;
	float Current_Grade; 
	float Final_Grade;
};
typedef struct Node { 
	struct Data Student; 
	struct Node *next;
} Node;


void option1(Node *head);

void option2(Node *head);

void option3(Node *head);

void option4(Node *head);

void option5(Node *head);

void option6(Node *head);

void option7(Node *head);

Node *option8(Node *head);

Node *option9(Node *head);

Node *option10(Node *head, char* newFile);

void printFloat(float score);

void printGrade(Node *address);

Node *readData(char *fileName);

Node *findNodeID(Node *head, int ID);

int ID_isduplicate(Node *head, int newStudentID);
