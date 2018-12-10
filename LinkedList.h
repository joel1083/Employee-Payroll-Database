#include "Node.h"
#include <iostream>

using namespace std;

class LinkedList{
	private: 
		Node *head;
	public: 
		LinkedList(){ // default constructor
		head = NULL;
		}
		
		void Insert();
    	void Remove();
    	void Clear();
    	void Display();
        void Print(Node*);
};
		
// Will allow the user to insert their data and store the information into the 
// constructor of the Node class. Will also set the pointer of the next node to the head of the last node.
void LinkedList :: Insert() {   
	int id;
    float salary;

	
    cout << "\n\tPlease enter the ID number: "; cin >> id;
	while ( id <= 0 ) { cout << "\tID MUST BE POSITIVE, RE-ENTER ID:"; cin >> id; }
    cout << "\tPlease enter the Salary: $";cin >>salary;
    
	// Instantiates a new node
    Node* newnode = new Node(id,salary);
    newnode->setpointer(head);
    head = newnode;        
}		

// This functioon will remove the last exisiting node assuming that there are more nodes attached.
// If there aren't it will notify the user that there arenm't any more nodes in the tail.
void LinkedList :: Remove() {
   	Node *curr;
	curr = head;
   	Node *prev;

    	if ( curr == NULL ){ 
		cout << "\n\tThere aren't anymore employees on the roster...";
		cin.get();
    	}
    	else if ( curr->nextpointer() == NULL ){
        	delete curr;
        	head = NULL;
        	}
            	else {      
                		do {
                   			prev = curr;
                   			curr = curr->nextpointer();
                			} while ( curr->nextpointer() != NULL ); 
									prev->setpointer(NULL);
                					delete curr; 
            }
}

// Calls the print function
void LinkedList :: Display(){
    Print(head);
}

// Cycles through all the nodes until it reaches the null pointer
void LinkedList :: Print(Node * temp){ 
	if ( temp != NULL ) 
    	{
        temp->getdata();
		Print(temp->nextpointer()); // recursive function call to the next temp node   
        }
}
		
// Removes all existing chains of the head one by one from the list	
void LinkedList ::Clear(){ 
	Node *temp;
	temp = head;
    if (head != NULL)
    {
        head = head->nextpointer();
        delete temp;
        Clear();
    }
}	

