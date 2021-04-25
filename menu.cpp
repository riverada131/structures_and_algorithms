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

void splash::print_welcome(string *msg) {
	cout << "Hello, my name is " << *msg << endl; 
	//printf("Hello my name is %p", msg);
};

