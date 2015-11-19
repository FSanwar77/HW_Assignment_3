// Lab 7 Exercise 1
// Display a row of $ characters based on user input
// Program by: Jimmy Nhes

#include <iostream>
using namespace std;

int main()
{
	// initialize a variable that will be assigned a value by the user
	int integer;
	int repCount = 1;

	do
	{
		repCount++;

		// prompts the user to enter a number 1-10
		cout << "\nPlease enter a number 1-10 to print out an equivalent amount of the dollar signs: ";
		cin >> integer;

		// display this error message if the value entered is invalid
		while (!(integer >= 1 && integer <= 10))
		{
			cout << "ERROR: Please enter a valid number. ";
			cout << endl << "Please enter the next number: ";
			cin >> integer;
		}

		// this loop prints out an equivalent number of dollar signs
		// to the number entered by the user
		for (int count = 1; count <= integer; count++)
		{
			cout << "$";
		}

	}

	// stops the loop if the runs successfully 5 times
	while (repCount <= 5);
	cout << "\nThe program has ended. ";
	return 0;
}