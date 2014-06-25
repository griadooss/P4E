/*
 * compute_pay.c
 *
 *  Created on: 24/06/2014
 *      Author: griadooss
 *
 *2.3 Write a program to prompt the user for hours and rate per hour to compute gross pay.
 *	Use 35 hours and a rate of 2.75 per hour to test the program
 *	(the pay should be 96.25).
 *	You should use atof() and snprintf to convert between string and float.
 *	Do not worry about error checking or bad user data.
*/
#include <stdio.h>
#include <stdlib.h>

enum { MAX = 7 };
static char sHrs[MAX];
static char sRate[MAX];

int main( int argc, char ** argv ) {
// get hrs worked
	printf("Enter hours worked : ");
	fflush(stdout);
	fgets(sHrs, max_length, stdin);

// get hourly rate
	printf("Enter hourly rate : ");
	fflush(stdout);
	fgets(sRate, max_length, stdin);

// compute pay
	fHrs = atof(sHrs); //"atof" converts inputs from strings to float values for computation.
	fRate = atof(sRate);
	fPay = fHrs * fRate; // do the math.
	snprintf(sPay, max_length, "%f", fPay ); //convert float back to a string for output

// output gross pay
	printf("\nYour Gross Pay is : %s", sPay);
	return 0;
}
