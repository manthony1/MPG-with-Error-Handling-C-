#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	// print name of program
	cout << "MILES PER GALLON CALCULATOR\n\n";

	char another_entry = 'y';
	while (tolower(another_entry) == 'y') {

		// get miles driven
		double miles = 0;
		while (true) {
			cout << "Enter miles driven: ";
			cin >> miles;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			//ensure valid miles provided
			if (cin.good()) {
				cout << "Miles entered: " << miles << endl;
			}
			else if (cin.fail()) {
				cout << "That's not a valid number. Try again.\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else if (cin.bad()) {
				cout << "An unrecoverable error has occured. Bye!\n";
				return 0;
			}
			else {
				cout << "Unknown issue. Bye!\n";
				return 0;
			}


			// check the range of the number
			if (miles <= 0) {
				cout << "Miles driven must be greater than zero. Please try again.\n";
				continue;
			}
			else if (miles > 10000) {
				cout << "Miles driven must be less than 10,000. Please try again.\n";
				continue;
			}
			
		
			
			else { //number is in specified range - exit loop
				break;
			}
		}




		// get gallons of gas used 
		double gallons = 0;
		while (true) {
			cout << "Enter gallons of gas used: ";
			cin >> gallons;
			cin.ignore(numeric_limits<streamsize>::max(), '\n');

			//ensure valid gallons provided
			if (cin.good()) {
				cout << "Gallons entered: " << miles << endl;
			}
			else if (cin.fail()) {
				cout << "That's not a valid number. Try again.\n";
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			else if (cin.bad()) {
				cout << "An unrecoverable error has occured. Bye!\n";
				return 0;
			}
			else {
				cout << "Unknown issue. Bye!\n";
				return 0;
			}




			// check the range of the number
			if (gallons <= 0) {
				cout << "Gallons used must be greater than zero. Please try again.\n";
				continue;
			}
			else if (gallons > 10000) {
				cout << "Gallons must be less than 10,000. Please try again.\n";
				continue;
			}
			else {  //number is in specified range - exit loop
				break;
			}
		}




		// calculate miles per gallon
		double mpg = miles / gallons;
		mpg = round(mpg * 100) / 100;
		cout << "Miles per gallon: " << mpg << endl << endl;



		// see if the user wants to enter more data
		cout << "Get entries for another trip? (y/n): ";
		cin >> another_entry;
        cout << endl;
	}

	cout << "Bye!\n\n";
}