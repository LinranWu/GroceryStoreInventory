/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE STRICTLY ADHERED TO THE TENURES OF THE OHIO STATE UNIVERSITY‘S ACADEMIC INTEGRITY POLICY. */
/*STUDENT NAME: Linran Wu */

struct Cost { 
	float wholesalePrice; 
	float retailPrice; 
	int wholesaleQuantity; 
	int retailQuantity; 
}; 
struct Data { 
	char item[50]; 
	char department[30]; 
	int stockNumber; 
	struct Cost pricing; 
}; 
typedef struct Node { 
	struct Data grocery_item; 
	struct Node *next; 
} Node;

struct Date {
	int days;
	int year;
};

void readFile(char* currentDate,char* filename1,Node** head);
void readingsuccess(Node* head,char* filename1);
int whetherContinue(int pastDay,int pastYear,char* currentDate);
int dateDifference(int pastDay,int pastYear,char* currentDate);
int getDaysInYear(int year);
int calcDays(int month,int day,int year);
void console(char* currentDate,char* filename2,Node **head);
void subconsole(int option,Node **head);
Node* newNode();
void insert(Node** head_ptr,Node *newNode_ptr);
void deleteNode(Node** head,int stockNum);
int member(Node* head,int stockNum);
void printDate(char* filename,char*currentDate);
void option1(Node* head);
void option2(Node* head);
void option3(Node* head);
void option4(Node* head);
void option5(Node* head);
void option6(Node* head);
void option7(Node* head);
void option8(Node* head);
void option9(Node* head);
void option10(Node** head);
void option11(Node** head);
void option12(Node* head,char* filename2,char* currentDate);
void freeall(Node** head);

