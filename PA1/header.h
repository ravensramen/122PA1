//Name: Sydnee Boothby
//Course: CptS122
//Professor + TA: Andy O'Fallon, 
//Assignment: PA1
//Date: 01/12

//add ifndef

//preprocessor directives
#define _CRT_SECURE_NO_WARNINGS

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
