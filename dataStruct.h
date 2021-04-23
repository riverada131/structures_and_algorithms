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

class list {
private:
	//Declare private variables here:
	person *head, *tail;
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

public:

};

class sort {
private:

public:

};

#endif /* DATASTRUCT_H */
