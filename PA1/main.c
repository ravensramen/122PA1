//file: main.c
//function: main function of the program to clean and analyze fitbit data

#include "header.h" //include libraries + preprocessor directives in header

int main() {

	FILE* fitbit_input = fopen("FitbitData.csv", "r"); //open file to read data
	FILE* fitbit_output = fopen("Results.csv", "w"); //open file to write completed data

	FitbitData fitbitdata[1440]; //initialize array of structs
	int i = 0; //for computeAverages function iteration

	//determine if input data was opened properly
	if (!(checkSuccess(fitbit_input))) return 0; //if file not opened properly
	//continue with program if file was opened properly
	
	welcomeStatement();//print welcome statement to console

	system("pause"); //pause for user to read welcome message before calculations
	system("cls"); //clear console before displaying data

	storeData(fitbit_input, fitbitdata, &i); //stores data from input into array of structs

	//analyze data
	computeAverages(fitbitdata, i, fitbit_output);  //find averages, sums, and period of poorest sleep

	fclose(fitbit_input); //close files after done running program
	fclose(fitbit_output); 

	
	exitStatement(); //print exit statement to console

	return 0;//program is done running
}
