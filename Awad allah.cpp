#include <iostream>
using namespace std;
cout<<"name: Awad Allah Hassan \n claas: 2nd class \n department: copmuter engineering"
struct Node { // define the node by struct...//
	int data; // define the variable data...//
	struct Node *next;
};
struct Node* top = NULL;
void push(int val) {
	struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));
	newnode->data = val;
	newnode->next = top;
	top = newnode;
}
struct node {
	int info;
	struct node *next;
	}*start;
	class list {
		public:
		// define the public functions (the public shape..)..//
			node* create_node(int);
			void insert_begin();
			void insert_pos();
			void insert_last(); 
			void delete_pos();
			void search();
			void displayo();
			list() {
				start = NULL;
			}
	};
node *list::create_node(int value)
// to  create  the node..//
		{
		struct node *temp;
		temp = new(struct node);
		if (temp == NULL){
			cout<<"\nError"<<endl;
			exit(1);
		}
		else {
			temp->info = value;
			temp->next = NULL;     
			return temp;
		}
		}
void list::insert_begin()
// to the insert the fisrt item in the list ..//
		{
			int value;
			cout<<"\nEnter the value to be add: ";
			cin>>value;
			struct node *temp, *p;
			temp = create_node(value);
			if (start == NULL) {
				start = temp;
				start->next = NULL;
			}
			else
			{
				p = start;
				start = temp;
				start->next = p;
			}
			cout<<"\nElement Inserted at beginning"<<endl;
		}
void list::insert_last() 7
		{
			// to the insert the last item in the list..//
			int value;
			cout<<"\nEnter the value to be inserted: ";
			cin>>value;
			struct node *temp, *s;
			temp = create_node(value);
			s = start;
			while (s->next != NULL)
			{
				s = s->next;
			}
			temp->next = NULL;
			s->next = temp;
			cout << "\nElement Inserted at end" << endl;  
		}
void list::insert_pos()
		{
			// to the insert item in the list..//
			int value, pos, counter = 0; 
			cout << "\nEnter the value to be inserted: ";
			cin >> value;
			struct node *temp, *s, *ptr;
			temp = create_node(value);
			cout << "\nEnter the postion: ";
			cin >> pos;
			int i;
			s = start;
			while (s != NULL)
			{
				s = s->next;
				counter++;
			}
			if (pos == 1) {
				if (start == NULL) {
					start = temp;
					start->next = NULL;
				}
				else {
					ptr = start;
					start = temp;
					start->next = ptr;
				}
			}
			else if (pos > 1  && pos <= counter) {
				s = start;
				for (i = 1; i < pos; i++) {
					ptr = s;
					s = s->next;
				}
				ptr->next = temp;
				temp->next = s;
			}
			else {
				cout<<"\nPositon not found"<<endl;
			}
		}
void list::delete_pos() { // to the delete the item from list ..//
			int pos, i, counter = 0;
			if (start == NULL) {
				cout<<"\nList is empty"<<endl;
				return;
			}
			cout<<"\nEnter the position: ";
			cin>>pos; // the insert pop ...//
			struct node *s, *ptr;
			s = start;
			if (pos == 1) {
				start = s->next;
			}
			else {
				while (s != NULL) {
					s = s->next;
					counter++;  
				}
				if (pos > 0 && pos <= counter) {
					s = start;
					for (i = 1;i < pos;i++) {
						ptr = s;
						s = s->next;
					}
					ptr->next = s->next;
				}
				else {
					cout<<"\nPosition not found"<<endl;
				}
				free(s);
				cout<<"\nElement deleted"<<endl;
			}
		}
void list::search() {
	// to the search in  the list ...//
	int value, pos = 0;
	bool flag = false;
	if (start == NULL) {
		cout<<"\nList is empty"<<endl;
		return;
	}
	cout<<"\nEnter the value: ";
	cin>>value;
	struct node *s;
	s = start;
	while (s != NULL) {
		pos++;
		if (s->info == value) {
			flag = true;
			cout<<"\nElement"<<value<<"is found at position "<<pos<<endl;
		}
		s = s->next;
	}
	if (!flag)
	cout<<"\nElement"<<value<<"not found"<<endl;
}
void list::displayo()  {
	// to test the list is empty or not ..//
	struct node *temp;
	if (start == NULL) {
		cout<<"\nThe list is empty"<<endl;
		return;
	}
	temp = start;
		cout << "\nElements: " << endl;
		while (temp != NULL) {
			cout << temp->info << "  >>>  ";
			temp = temp->next;
		}
	cout<<"nothing"<<endl;
}
void pop() {
	// to test the pop stack ..//
	if (top == NULL){
		cout << "\nStack underflow" << endl;
	}
	else {
		cout << "\nThe popped element: " << top->data << endl;
		top = top->next;
	}
}
void display() {
	// to test the display stack ...//
	struct Node* ptr;
	if(top == NULL)
	cout << "\nStack is empty";
	else {
		ptr = top;
		cout << "Stack elements: ";
		while (ptr != NULL) {
			cout << ptr->data << " ";
			ptr = ptr->next;
		}
	}
	cout << endl;
}
int queue[50], n = 50, front = - 1, rear = - 1; // define the variables ..//
void Insert() {
	// to test the insert the element to queue..//
	int val;
	if (rear == n - 1)
	cout << "\nQueu overflow" << endl;
	else {
		if (front == - 1)
		front = 0;
		cout << "\nInsert the element: ";
		cin >> val;
		rear++;
		queue[rear] = val;
	}
}
void Delete() {
	// to test delete from the queue...//
	if (front == - 1 || front > rear) {
		cout << "\nQueue underflow" << endl;
		return ;
	} else {
		cout << "\nElement deleted from queue is: " << queue[front] << endl;
		front++;;
	}
}
void Display() {
	// to test the queue is emptey or not ..//
	if (front == - 1)
	cout << "\nQueue is empty" << endl;
	else {
	cout << "\nQueue elements are: ";
	for (int i = front; i <= rear; i++)
	cout << queue[i]<<" ";
		cout << endl;
}
}
int A;
int main(){
	cout<<"use 1 and 2 and 3"<<endl;
	cout << "\n\nWhat do you want: ";
	cin>>A;
	if (A == 1){
		int ch;
		cout << "1) add to Queue" << endl;
		cout << "2) delete from Queue" << endl;
		cout << "3) Display all the elements of Queue" << endl;
		cout << "4) Exit" << endl;
		do {
			cout << "\nEnter your choice : ";
			cin >> ch;
			switch (ch) {
				case 1: Insert(); // insert to the queue..//
					break;
				case 2: Delete(); // delete from  the queue..//
					break;
				case 3: Display(); //  // display  the queue../
					break;
				case 4:
					exit(1); //  // exit from the queue../
				default:
					cout<<"\nInvalid choice"<<endl;
					break;
			}
	} while(ch!=4);
	}
	else if (A == 2){ // condition..//
		int ch, val; //  define the varibales..//
		cout << "(1) Push in Stack" << endl;
		cout << "(2) Pop from Stack" << endl;
		cout << "(3) Display Stack" << endl;
		cout << "(4) Exit" << endl;
		do {
			cout << "\n\nEnter your choice: ";
			cin >> ch; //  input varible to comprison between the cases..//
			switch(ch) // comprison..//{
				case 1: {
					cout << "\nEnter a value to be pushed: ";
					cin >> val;// inoput the value to push..//
					push(val); // the function of push..//
					break;
				}
				case 2: {
					pop();//   the function of pop..// 
					break;
				}
				case 3: {
					display(); //  the function of display..//
					break;
				}
				case 4: {
					exit(1); // the function to exit from the system ..//
				}
				default: { 
					cout << "\nInvalid Choice" << endl;
					break;
				}
			}
		} while(ch!=4); // condition ...//
	}
	else if (A == 3) {
 		int choice;
		list sl;
			start = NULL;
			while (1)
			{
				cout<<"1- add at beginning"<<endl;
				cout<<"2- add at last"<<endl;
				cout<<"3- add at position"<<endl;
				cout<<"4- Delete"<<endl;
				cout<<"5- Search"<<endl;
				cout<<"6- Display"<<endl;
				cout<<"7- Exit"<<endl;
				cout<<"\nEnter your choice: ";
				cin >> choice; //  input the choice to test ..//
				switch(choice) {// to comparison ...//
				case 1:
					sl.insert_begin(); // begginer of  the input..//
					cout<<endl;
					break;
				case 2:
					sl.insert_last(); //  the last of the input..//
					cout<<endl;
					break;
				case 3:
					sl.insert_pos(); //  input the pos..//
					cout<<endl;
					break;
				case 4:
					sl.delete_pos(); //  delete the pos ..//
					break;
				case 5:
					sl.search(); // to search the pos..//
					cout<<endl;
					break;
				case 6:
					sl.displayo(); // display...//
					cout<<endl;
					break;
				case 7:
					exit(1); // to exit from case 7....//
				default:
					cout<<"\nWrong"<<endl;
					break;
				}
			}
	}
	else if (A == 4) { // condition..//
		return 0;
	}
	else {
		cout << "\nWrong\n" << endl;
		exit(1); // to exit from the system..//
	}
	return 0;
}