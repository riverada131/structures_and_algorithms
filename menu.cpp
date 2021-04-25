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

void pause() {
	cout << string(7, ' ');
	printf("Press enter to continue");
	while(getchar() != '\n');
}

void splash::print_welcome(string *msg, string *origination_date, string *program_name) {
	system("clear");
	int num_asterics = 43;
	cout << string(num_asterics, '*') << endl;
	cout << "* Author: " << *msg << string(19, ' ') << "*" << endl;
	cout << "* Created on: " << *origination_date << string(19, ' ') << "*" << endl;
	printf("* Copyright, 2021, All rights reserved    *\n");
	cout << "* program name: " << *program_name << " *" << endl;
	cout << string(num_asterics, '*') << endl;
	pause();
	system("clear");
};
