/*
Author: Daniel Rivera
Created on: 04/20/2021
Copyright 2021, Daniel Rivera, All rights reserved

Description:

*/

#include "dataStruct.c"
#include "menu.c"

int main(int argc, char* argv[]) {
	splash sh;
	const char* name;
	name = "Daniel Rivera";
	sh.print_welcome(name);

	list func;

	single_node *head = NULL;
	single_node *second = NULL;
	single_node *third = NULL;

	head = new single_node();
	second = new single_node();
	third = new single_node();
	
	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = NULL;

	//cout << second->data << endl;
	//cout << second->next << endl;

	func.printList(head);
	return 0;
}

/*
Rev Block:
Revision New - 04/20/2021 - Initial Release
*/
