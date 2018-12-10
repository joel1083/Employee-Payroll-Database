#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node{
	private:
		int ID;
		float Salary;
		Node *nextptr; // pointer that will be used to locate the next available class' address!
		
	public:
		Node(int a, double b) // constructor is the mutator method
		{
			this->ID = a;
			this->Salary = b;
		}
		
		void getdata() const // get the current node's information / The accessor method!
		{
			cout << "\n\tEmployee ID: " << ID; 
			cout << "\n\tEmployee Salary: $" << Salary;  cout << "\n";
		}
		
		Node* nextpointer() // Gives the current pointer the address to the next pointer!
		{
			return nextptr;
		}
		
		void setpointer (Node *address) // sets the pointer to the current node address
		{
			nextptr = address;
		}
};
#endif
