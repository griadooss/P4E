/*
 * compute_pay.cpp
 *
 *  Created on: 24/06/2014
 *      Author: griadooss
 *
 *2.3 Write a program to prompt the user for hours and rate per hour to compute gross pay.
 *	Use 35 hours and a rate of 2.75 per hour to test the program
 *	(the pay should be 96.25).
 *	You should use atof() to convert between string and float.
 *	Do not worry about error checking or bad user data.
*/
#include <iostream>
#include <stdlib.h>
using namespace std;

int main( int argc, char ** argv ) {
// get hrs worked
	string sHrs;
	cout << "Enter hours worked : " << flush;
	cin >> sHrs;

// get hourly rate
	string sRate;
	cout << "Enter hourly rate : " << flush;
	cin >> sRate;

// compute pay
	float fHrs = atof(sHrs.c_str()); //"atof" converts inputs from string to float.
	float fRate = atof(sRate.c_str());
	float fPay = fHrs * fRate; // do the math.

// output gross pay
	cout << "Your Gross Pay is : ";
	cout << fPay;

	return 0;
}
