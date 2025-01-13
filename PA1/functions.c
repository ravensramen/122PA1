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
	printf(" total floors,\ntotal steps, average heartrate, maximum steps per minute, and sleep quality.\n\n");
	return;
}
//name:exitStatement
//desc: prints final statement to console
//parameters: n/a
//output: n/a

void exitStatement(void) {
	printf("Thank you for using FitBit today, see you tomorrow!");
}

//name:readData
//desc: prints welcome statement to console
//parameters: pointer to input data
//output: n/a
//read data and store it into structs
void readData(FILE* fitbit_input) {
	char* target = targetPatient(fitbit_input);//detect user target patient, used to parce data later
	printf("Welcome user %s!\n\n", target);
	welcomeStatement(); //print welcome statement


	free(target); //free heap memory of target
	//iterate through each line, only read if valid target user
	//check for repeated minutes
}



char* targetPatient(FILE* fitbit_input) {
	
	char first_line[100]; //stores first line of input
	char* target = malloc(6 * sizeof(char));

	fgets(first_line, sizeof(first_line), fitbit_input); //stores first line of fitbit input into first_line
	strtok(first_line, ","); //separates out first word (i.e target)
	char* second_token = strtok(NULL, ","); //stores token to target

	strcpy(target, second_token); 
	
	return target; //returns user id target to rest of function
}
