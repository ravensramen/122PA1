//file: functions.c
//function: stores all the definitions of user defined functions

//name:
//desc: 
//parameters: 
//output: 

#include "header.h" //include libraries + preprocessor directives in header

//name:checkSuccess
//desc: determines if input data file was inputted properly
//parameters: pointer to input data file
//output: boolean value, false if file not opened, true if opened

bool checkSuccess(FILE* input) {
	if (input == NULL) {
		printf("Your data is not entered properly, please try again");
		return false;
	}
	//if file not opened properly return false
	else return true;
}

//name:welcomeStatement
//desc: prints welcome statement to console
//parameters: n/a, only runs if file was successfully opened.
//output: n/a

void welcomeStatement(void) {
	printf("Thank you for inputting your FitBit data today.\n");
	printf("Your data will now be analyzed for total calories, total distance");
	printf("total floors, total steps, average heartrate, maximum steps per minute, and sleep.\n");
	return;
}