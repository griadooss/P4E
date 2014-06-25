//
//4.6 Write a program to prompt the user for hours and rate per hour using raw_input to compute gross pay.
//	Award time-and-a-half for the hourly rate for all hours worked above 40 hours.
//	Put the logic to do the computation of time-and-a-half in a function called computepay() and use the function to do the computation.
//	The function should return a value. Use 45 hours and a rate of 10.50 per hour to test the program (the pay should be 498.75).
//	Do not worry about error checking the user input unless you want to - you can assume the user types numbers properly.
//


#include <stdio.h>
#include <stdlib.h>

enum { MAX = 7 };
static char sHrs[MAX];
static char sRate[MAX];

float computepay(float(h), float(r)) {
	float gp = 0.0;
	if(h > 40) {
		gp = ((h - 40)*(1.5*r)) + (40 * r);
	}
	else {
		gp = (h * r);
	}
	return gp;
}

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
	printf("Your gross pay is, %f ", computepay(fHrs, fRate));

	return 0;
}
