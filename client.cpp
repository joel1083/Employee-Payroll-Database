/*
	Name: Joel Rivas
	Class: CIS 260
	Date: 10/10/17
		Program Name: Employee Program using a LinkedList
		Program Description: This program will display a menu of options and depending on user input, this 
		program will modify the active enrollment of a company employee roster. This program contains the options to
		add into an existing list, remove the last node of a list, display the content of the entire list, and clear all
		the listed entries that are in the list.
*/

#include <iostream>
#include "LinkedList.h"

using namespace std;

void menu(LinkedList &);

int main()
{
    // New list
    LinkedList list;
    menu(list); 
    cout << "\n\tThank you for using PCCC software\n";
    return 0;
}

void menu(LinkedList &list)
{   char choice;
    while ( choice != 'E' ){   // additional escape key 
        system("CLS"); 
        cout << "\n\tMain Menu\n\n";
		cout << "\tHere are the available Options(?)\n";
        cout << "\t(1)--Insert An Empolyee-------(I)\n";
        cout << "\t(2)--Remove Last Employee-----(R)\n";
        cout << "\t(3)--Display Employee Roster--(D)\n";
        cout << "\t(4)--Clear Employee Roster----(C)\n";
        cout << "\t(5)--Exit---------------------(E)\n";
        cout << "\n\tWhat would you like to do? ";cin >>choice;
        choice = toupper(choice);
        cin.ignore();
        if (choice == '1' || choice == 'I')
            list.Insert();
        else if ( choice == '2' || choice == 'R')    
            list.Remove();
        else if ( choice == '3' || choice == 'D'){	
            list.Display(); cin.get();}
 		else if ( choice == '4' || choice == 'C'){
            list.Clear();}
        else if( choice == '5')
        		return;
        }
}


/*
        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 1

        Please enter the ID number: 1234
        Please enter the Salary: $9500

-------------------------------------------

        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 3

        Employee ID: 3456
        Employee Salary: $7500

        Employee ID: 2345
        Employee Salary: $8500

        Employee ID: 1234
        Employee Salary: $9500

-----------------------------------

        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 2

		*(Last Employee was removed )*
		
        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 3

        Employee ID: 3456
        Employee Salary: $7500

        Employee ID: 2345
        Employee Salary: $8500

---------------------------------------------

        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 4

        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 3
        
        *(All employees were removed so none are displayed)*
        
-----------------------------------------------------

        Main Menu

        Here are the available Options(?)
        (1)--Insert An Empolyee-------(I)
        (2)--Remove Last Employee-----(R)
        (3)--Display Employee Roster--(D)
        (4)--Clear Employee Roster----(C)
        (5)--Exit---------------------(E)

        What would you like to do? 5

        Thank you for using PCCC software

--------------------------------
Process exited after 226.5 seconds with return value 0
Press any key to continue . . .

*/
