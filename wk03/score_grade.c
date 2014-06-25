//3.3 Write a program to prompt the user for a score using raw_input. Print out a letter grade based on the following table:
//	Score Grade
//		>= 0.9 A
//		>= 0.8 B
//		>= 0.7 C
//		>= 0.6 D
//		< 0.6 F
//	If the user enters a value out of range, print a suitable error message and exit. For the test, enter a score of 0.85.


#include <stdio.h>
#include <stdlib.h>

enum { MAX = 7 };
static char sScore[MAX];

void computegrade(float(s)) {
	if(s >= 0.0 && s <= 1.0) {
		if(s >= 0.9 && s <= 1.0) {
			printf("Congrats!! .. you scored an 'A'");
			}
		else if(s >= 0.8 && s < 0.9) {
			printf("Well Done!! .. a Distinction! ... you scored an 'B'");
			}
		else if(s >= 0.7 && s < 0.8) {
			printf("Creditable work!! .. you scored an 'C'");
			}
		else if(s >= 0.6 && s < 0.7) {
			printf("I think you can do better than this!! .. you scored an 'D'");
			}
		else if(s >= 0.0 && s < 0.6) {
			printf("Unfortunately .. you did not pass the exam .. you scored an 'F'");
			}
		}
	else {
		printf("You need to enter a value in the format 0.nn .. try again!");
	}
}

int main( int argc, char ** argv ) {
	// get students score
	printf("Enter your score : ");
	fflush(stdout);
	fgets(sScore, MAX, stdin);

	// compute grading
	float fScore = atof(sScore);
	computegrade(fScore);

	return 0;
}
