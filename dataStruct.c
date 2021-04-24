/*
Author: Daniel Rivera
Created on: 4/3/2021
Copyright 2021, Daniel Rivera, All rights reserved.
*/

#include "dataStruct.h"
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void list::message(const char **msg) {
	//printf(msg);
	cout << *msg << endl;
}

void list::linked_list(){
	head = NULL;
	tail = NULL;
}

void list::printList(single_node *n){
	while (n != NULL) {
		cout << n->data << endl;
		n = n->next;
	}
}
