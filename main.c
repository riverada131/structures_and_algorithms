/*
Author: Daniel Rivera
Created on: 04/20/2021
Copyright 2021, Daniel Rivera, All rights reserved

Description:

*/

#include "dataStruct.c"

int main(int argc, char* argv[]) {
	list func;
	int *ptr;
	int test_number = 10;
	ptr = &test_number;
	func.number(ptr);
	func.linked_list a;
	const char* my_msg = "hello world";
	func.message(&my_msg);
	//printf("%d \n", test_number);
	//printf("%p \n", &test_number);
	//printf("%p \n", ptr);

	printf("&my_msg = %p \n", &my_msg);
	printf("my_msg = %s \n", my_msg);
	printf("*my_msg = %d \n", *my_msg);
	//printf("**my_msg = %p \n", **my_msg); 
	
	delete my_msg;
	my_msg = NULL;

	delete ptr;
	ptr = NULL;
	return 0;
}

/*
Rev Block:
Revision New - 04/20/2021 - Initial Release
*/
