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

/*Function name: press_enter_to_continue
Input: Enter - user presses enter key to continue
Output: None
Description: used to pause any process until the user presses enter.
*/
void press_enter_to_continue() {
	cout << string(7, ' '); //output of 7 spaces before printing the message.
	printf("Press enter to continue"); //prints the message for the user to press enter.
	while(getchar() != '\n'); //while loop to wait until the user presses enter.
}

/*Function name: print_welcome
Input:
year_created - integer variable passed for copyright declaration. year inserted into the statement.
authors_name - pointer variable passed for the author's name and added to the splash screen.
origination_date - pointer variable passed for the creation date of the program.
program_name - pointer variable created for the programs name and displayed within the splash screen.
Output: None
Description: this function is used to display a splash screen to the user.
*/
void splash::print_welcome(int year_created, string *authors_name, string *origination_date, string *program_name) {
	//Variable decleration here:
	system("clear"); //system call to clear screen
	int num_asterics = 43; //variable to set number of asterics on the top and bottom border

	//Message outputs for the initial splash screen.
	cout << string(num_asterics, '*') << endl;
	cout << "* Author: " << *authors_name << string(19, ' ') << "*" << endl;
	cout << "* Created on: " << *origination_date << string(19, ' ') << "*" << endl;
	printf("* Copyright, %i, All rights reserved    *\n", year_created);
	cout << "* program name: " << *program_name << " *" << endl;
	cout << string(num_asterics, '*') << endl;

	//function calls here
	press_enter_to_continue();//function call to pause the screen until the user presses enter
	system("clear");//system call to clear screen.
};
