/* 
Author: Daniel Rivera
Created on: 4/3/2021
Copyright 2021, Daniel Rivera, All rights reserved 
*/

#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <string>

struct person{
	std::string firstName;
	std::string lastName;
	std::string phoneNumber;
	struct Node *next;
	struct Node *prev;
};

struct single_node {
	std::string name;
	struct Node *next;
};

class list {
private:
	//Declare private variables here:
	person *head, *tail;
	single_node *head, *tail;
	//Declare private prototypes here:

public:
	//Declare public varables here:

	//Declare public prototypes here: 
	void message(const char **msg);
	void number(int* num);
	void createNode();

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

#endif /* DATASTRUCT_H */
