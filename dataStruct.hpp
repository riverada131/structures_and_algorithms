/* 
Author: Daniel Rivera
Created on: 4/3/2021
Copyright 2021, Daniel Rivera, All rights reserved 
*/

#ifndef DATASTRUCT_HPP
#define DATASTRUCT_HPP

#include <string>

struct single_node {
	int data;
	struct single_node *next;
};

class list {
private:
	//Declare private variables here:
	single_node *head, *tail;

	//Declare private prototypes here:

public:
	//Declare public varables here:

	//Declare public prototypes here: 
	void message(const char **msg);
	void number(int* num);
	void createNode();
	void printList(single_node *n);

	void linked_list();
};

class search {
private:
	// Declare private variables here:

	// Declare private prototypes here:

public:
	// Declare public variables here:

	// Declare public prototypes here:

};

class sort {
private:
	// Declare private variables here:

	// Declare private prototypes here:

public:
	// Declare public variables here:

	// Declare public prototypes here:

};

#endif /* DATASTRUCT_HPP */
