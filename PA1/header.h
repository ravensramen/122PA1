//Name: Sydnee Boothby
//Course: CptS122
//Professor + TA: Andy O'Fallon, Kyle Parker
//Assignment: PA1
// Description: Read csv input of a day's worth of fitbit data. Dedupe and clean through data, record analysis of results to an output csv file.
//Date: 01/20/2025


//preprocessor directives
#define _CRT_SECURE_NO_WARNINGS
#define MISSING_VALUE -1;

//import libraries for functions
#include <stdio.h> //printf, scanf, file functions...
#include <string.h> //string mod functions, strtok, strlen...
#include <stdbool.h> //for boolean functions
#include<stdlib.h>

//structs definition

typedef enum sleep
{
	NONE = 0, ASLEEP = 1, AWAKE = 2, REALLYAWAKE = 3
} Sleep;

 
typedef struct fitbit {
	char patient[10];
	char minute[9];
	double calories;
	double distance;
	unsigned int floors;
	unsigned int heartRate;
	unsigned int steps;
	Sleep sleepLevel;

} FitbitData;


//function declarations, descriptions in functions.c
bool checkSuccess(FILE* input);
void welcomeStatement(void);
void exitStatement(void);
void readData(FILE* fitbit_input); 
char* targetPatient(FILE* fitbit_input);
void storeData(FILE* input, FitbitData* fitbitdata, int* i);
char* my_strtok(char* buffer, char delim); 
int minuteToIndex(char* minute);
void computeAverages(FitbitData* fitbitdata, int size, FILE* output);
void poorSleep(FitbitData* fitbitdata, int size, int* start_index, int* end_index);
