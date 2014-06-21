/*
 * raw_imput.c
  *      Author: griadooss
  *
  * 2.2 Write a program that uses raw_input to prompt a user for their name and then welcomes them. Note that raw_input will pop a dialog box.
  * Enter Sarah in the pop-up box when you are prompted so your output will match the desired output not shown below.
  * Now edited in Eclipse by linking the file through and existing cpp Eclipse Project
  *
  */

#include <stdio.h>

enum { max_length = 127 };
static char sName[max_length];

int main( int argc, char ** argv ) {
	printf("Enter your first name followed by you second name : ");
	fflush(stdout);
	fgets(sName, max_length, stdin);
	printf("Hello, %s", sName);
	return 0;

}
