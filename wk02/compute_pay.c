/*
 * compute_pay.c
 * Author: griadooss
 *
 * 2.3 Write a program to prompt the user for hours and rate per hour using raw_input to compute gross pay.
 * Use 35 hours and a rate of 2.75 per hour to test the program (the pay should be 96.25).
 * You should use raw_input to read a string and float() to convert the string to a number.
 * Do not worry about error checking or bad user data.
 */

#include <stdio.h>

enum { max_length = 5 };
static char sHrs[max_length];
static char sRate[max_length];

int main( int argc, char ** argv ) {
	printf("Enter Hours Worked: ");
	fflush(stdout);
	fgets(sHrs, max_length, stdin);
	printf("Enter Rate per Hour : ");
	fflush(stdout);
	fgets(sRate, max_length, stdin);
	printf("Hrs = %s", sHrs);
	printf("Rate = %s", sRate);
	printf(strtof(sHrs) * strtof(sRate));
	return 0;

}
