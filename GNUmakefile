# Author: Daniel Rivera
# Created on: 04/20/2021
# Copyright 2021, Daniel Rivera, All rights reserved
# Description: This makefile contains all recipes to compile the project in this folder.

# set flags
CC=g++
CFLAGS=-I

# use the @ prepend to hide compile message (Source: https://stackoverflow.com/questions/9883950/how-to-hide-compiling-message-in-makefile)
# set recipes for compiling the files
test : main.c dataStruct.o
	@$(CC) -g main.c -o test.exe
	@echo 'Action complete. Use ./test.exe to run'

dataStruct.o : dataStruct.c dataStruct.h
	@$(CC) -g -c dataStruct.c -o dataStruct.o
	@echo 'Action complete. dataStruct.o has been created.'

# set recipe for cleaning file structure

clean:
	@$() rm -f *.o
	@$() rm -f *.exe
	@echo 'Action complete. All files removed'

# Rev Description:
# Revision New - 04/20/2021 - Initial Release
