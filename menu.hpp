
/*
Author: Daniel Rivera
Created on: 4/3/2021
copyright 2021, Daniel Rivera, all rights reserved
*/

#ifndef MENU_HPP
#define MENU_HPP

#include <string>

typedef void(*menu_processing_function_pointer)(void);

struct menu_options {
	char choice;
	const char *p_selection_text;
	menu_processing_function_pointer p_processing_function;
};

using std::string;

class splash {
private:

public:
	void print_welcome(int year_created, string *authors_name, string *origination_date, string *program_name);
};

class menu {
private:

public:
	int primary_menu();
	void process_selection_one();
	void process_selection_two();
};

#endif /* MENU_HPP */
