/*
author: Shelby Coffman
class : ITSE 1307
description : Write a program that converts a numeric grade to a letter grade.
			  Create a function that converts the grade from numeric to letter.
			  Create another function that asks the user if they want to continue and then return the result to main.
*/

//include libraries
#include <iostream>
#include <cmath>
using namespace std;

//function prototypes
char ConvertGrade(int x);
bool Continue();

//main function
int main()
{

	//declare variables
	bool blKeepGoing = true;
	int iGrade;

	//main loop
	//if blKeepGoing is false, then the loop will terminate
	do
	{
		//prompt user to enter a numeric grade
		cout << "Enter grade (0 to 100): ";
		cin >> iGrade;

		//display the letter grade by calling ConvertGrade() and
		//pass iGrade as an argument
		cout << "The letter grade is: " << ConvertGrade(iGrade) << endl;

	} while (Continue());

	return 0;
}

//function definition for ConvertGrade()
char ConvertGrade(int x)
{
	char cLetterGrade;

	if (x / 10 <= 5)
		cLetterGrade = 'F';
	else if (x / 10 <= 6)
		cLetterGrade = 'D';
	else if (x / 10 <= 7)
		cLetterGrade = 'C';
	else if (x / 10 <= 8)
		cLetterGrade = 'B';
	else if (x / 10 <= 10)
		cLetterGrade = 'A';

	return cLetterGrade;
}

//function definition for Continue()
//note: this function does not accept any parameters
//but still returns a value
bool Continue()
{
	char cContinue;
	//loop until the user has entered Y, y, N, or n
	do
	{
		cout << "Continue? (Y/N): ";
		cin >> cContinue;
		cContinue = toupper(cContinue);
	} while (cContinue != 'Y' && cContinue != 'N');

		//if the user entered Y or y then return true
		if (cContinue == 'y' || cContinue == 'Y')
			return true;

	//else, return false
	return false;
}