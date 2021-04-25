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
	splash sh;
	string name = "Daniel Rivera";
	string *full_name = &name;
	sh.print_welcome(full_name);

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
