//file: main.c
//function: main function of the program to clean and analyze fitbit data

#include "header.h" //include libraries + preprocessor directives in header

int main() {
	FILE* fitbit_input = fopen("FitbitData.csv", "r"); //open file to read data
	FILE* fitbit_output = fopen("AnalyzedFitbitData.csv", "w"); //open file to write completed data
	//determine if input data was opened properly
	if (!(checkSuccess(fitbit_input))) return 0; //if file not opened properly

	welcomeStatement(); //file successfully opened, print welcome statement



	//close fitbit_input data file
	return 0;//program is done running
}