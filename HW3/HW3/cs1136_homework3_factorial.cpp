// Calculate factorials up to 20!
//
// n! is 1 * 2 * 3 * ... * n-2 * n-1 * n
//
// Allow n to be any number from 1 to 20. A value of 0 says to stop processing
//
// You will need to calculate your factorials in a long long int or an unsigned long long int.
// 21! will not fit into either a long long int or an unsigned long long int. 
//
#include <iostream>

using namespace std;

// function prototypes
// read the number and validate it
int getNumber();
// calculate the factorial (up to 20)
long long int calculateFactorial(int value);

// the main drives the application
// you need a processing loop that will keep reading in numbers and calculating the factorial for
// that number. The processing stops when the user enters in 0 for the number. Do you output a
// factorial if the user enters 0. 
int main()
{
	// PUT YOUR MAIN PROCESSING LOOP HERE
	// Your processing logic will have a loop that allows you to enter
	// numbers between 1 and 20 (inclusive). You will then calculate the
	// factorial for that number. You will continue processing numbers until
	// the user enters 0. 
	// Your main must use getNumber to read in and validate the number.
	// Your main must use calculateFactorial to calculate the factorial
	// Your main function also needs to output the factorial calculated by 
	//  calculateFactorial
}

// get a number between 0 and 20 inclusive. 
int getNumber()
{
	// Ask for a read a number from 0 to 20 inclusive. 
	// Validate the input number and ask for a new value until the use 
	// enters a valid number in the range of 0 to 20 inclusive. 
	// Return the valid value back to the caller
}

// calculate n! for the case where n is value. 
long long int calculateFactorial(int value)
{
	// Calculate the factorial for the number passed to the function (parameter value).
}

//testing commenter 


//iteration 2