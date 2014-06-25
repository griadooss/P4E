/*
 * 3.1 Write a program to prompt the user for hours and rate per hour using raw_input to compute gross pay.
 *	Award time-and-a-half for the hourly rate for all hours worked above 40 hours.
 *	Use 45 hours and a rate of 10.50 per hour to test the program (the pay should be 498.75).
 *	Do not worry about error checking the user input - assume the user types numbers properly.
 *
 */

#include <stdio.h>
#include <stdlib.h>

enum { MAX = 7 };
static char sHrs[MAX];
static char sRate[MAX];

int main( int argc, char ** argv ) {
	// get hrs worked
	printf("Enter your hours worked : ");
	fflush(stdout);
	fgets(sHrs, MAX, stdin);

	// get hourly rate
	printf("Enter your hourly rate : ");
		fflush(stdout);
		fgets(sRate, MAX, stdin);

	// compute pay
	float fHrs = atof(sHrs);
	float fRate = atof(sRate);
	if(fHrs > 40) {
		printf("Your gross pay is, %f ", ((fHrs - 40)*(1.5*fRate) + (40 * fRate)));
	}
	else {
		printf("Your gross pay is, %f ", fHrs * fRate);
	}


	return 0;
}
