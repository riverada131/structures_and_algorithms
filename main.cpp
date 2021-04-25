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
	int creation_year = 2021;
	string name = "Daniel Rivera";
	string creation_date = "4/25/2021";
	string name_of_program = "structures and algorithms";

	splash sh;
	string *full_name = &name;
	string *origination_date = &creation_date;
	string *program_name = &name_of_program;
	sh.print_welcome(creation_year, full_name, origination_date, program_name);

	full_name = NULL;
	delete full_name;

	list func;

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
	delete head;
	delete second;
	delete third;
	return 0;
}

/*
Rev Block:
Revision New - 04/20/2021 - Initial Release
*/
