/*
Author: Daniel Rivera
Created on: 04/20/2021
Copyright 2021, Daniel Rivera, All rights reserved

Description:

*/

#include "dataStruct.cpp"
#include <string>
#include "menu.cpp"

using std::string;

int main(int argc, char* argv[]) {
	//variable declerations:
	int creation_year = 2021; //variable to add year here for copyright addition
	string name = "Daniel Rivera"; //variable to add the author's name here
	string creation_date = "4/25/2021"; //variable created for date this program was created on.
	string name_of_program = "structures and algorithms"; // variable for the program name.

	//pointer declerations:
	string *full_name = &name;
	string *origination_date = &creation_date;
	string *program_name = &name_of_program;

	//function declerations:
	splash sh;
	list func;
	sh.print_welcome(creation_year, full_name, origination_date, program_name);

	single_node *head = new single_node();
	single_node *second = new single_node();
	single_node *third = new single_node();;

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	func.printList(head);

	//pointer cleanup:
	full_name = NULL;
	delete full_name;
	delete head;
	delete second;
	delete third;
	return 0;
}

/*
Rev Block:
Revision New - 04/20/2021 - Initial Release
*/
