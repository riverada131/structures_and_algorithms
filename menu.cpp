/*
Author: Daniel Rivera
Created on: 4/3/2021
Copyright 2021, Daniel Rivera, All rights reserved.

Description:

*/

#include "menu.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*Function name: press enter to continue
Input: Enter - user presses enter key to continue
Output: None
Description: used to pause any process until the user presses enter.
*/
void press_enter_to_continue() {
	cout << string(7, ' ');
	printf("Press enter to continue");
	while(getchar() != '\n');
}

/*Function name: print welcome
Input:
year_created - integer variable passed for copyright declaration. year inserted into the statement.
authors_name - pointer variable passed for the author's name and added to the splash screen.
origination_date - pointer variable passed for the creation date of the program.
program_name - pointer variable created for the programs name and displayed within the splash screen.
Output: None
Description: this function is used to display a splash screen to the user.
*/
void splash::print_welcome(int year_created, string *authors_name, string *origination_date, string *program_name) {
	system("clear");
	int num_asterics = 43;
	cout << string(num_asterics, '*') << endl;
	cout << "* Author: " << *authors_name << string(19, ' ') << "*" << endl;
	cout << "* Created on: " << *origination_date << string(19, ' ') << "*" << endl;
	printf("* Copyright, %i, All rights reserved    *\n", year_created);
	cout << "* program name: " << *program_name << " *" << endl;
	cout << string(num_asterics, '*') << endl;
	press_enter_to_continue();
	system("clear");
};
