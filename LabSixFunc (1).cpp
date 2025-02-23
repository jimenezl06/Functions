// ********************************************************
// Programmer�s name: Luis Jimenez 
// Course Number:  CIS142
// Date:  November 15, 2022
// Assignment:  Lab 6
// Description:  Functions
// Files: LabSixFunc.cpp
// ********************************************************
#include <cmath>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
//Void function Menu 
//Displays Menu
void Menu() {

	cout << endl;

	cout << "	A. Add two decimal numbers" << endl;

	cout << "	B. Subtract two decimal numbers" << endl;

	cout << "	C. Multiply two decimal numbers" << endl;

	cout << "	D. Divide two decimal numbers" << endl;

	cout << "	Q. Quit" << endl;

	cout << endl;
}
//Function Add, in charge of adding a and b
float   Add(float a, float b) {
	return  a + b;
}
//Function Subtarct, in charge of subtracting a and b
float   Subtract(float a, float b) {
	return a - b;
}
//Function Multiply, in charge of multiplying a and b
void   Multiply(float& a, float& b) {
	float mrslt;
	cin >> a >> b;
	mrslt = a * b;
	cout << "\t" << a << " * " << b << " = " << mrslt << fixed << setprecision(2);
	cout << endl;
	return;
}
//Function Divide, in charge of dividing a and b
void   Divide(float& a, float& b) {
	float drslt;
	cin >> a >> b;
	drslt = a / b;
	cout << "\t" << a << " / " << b << " = " << setprecision(6) << drslt;
	cout << endl;
}
//Start of main
int main()
{
	//Variables
	float a = 0.00;

	float b = 0.00;

	float rslts = 0.00;

	char usr_inp{};
	//Do while statement
	do {//Displays Menu();
		Menu();

		//Asks user for selection, stores it in usr_inp
		cout << "	Please enter your selection: ";
		cin >> usr_inp;
		cout << endl;
		//Toupper takes in both lowercase and uppercase
		usr_inp = toupper(usr_inp);
		
		//Switch statement 
		switch (usr_inp) 
		{
		case 'A':
			//Asks user to enter two decimal numbers
			cout << "	Please enter two decimal numbers: ";
			//Stored in a, b
			cin >> a >> b;
			rslts = Add(a, b);
			//Results 
			cout << "	" << a << fixed << setprecision(1) << " + " << b << " = " << rslts;
			cout << endl;


			break;

		case 'B':
			cout << "	Please enter two decimal numbers: ";
			cin >> a >> b;
			//Subtracts a and b
			rslts = Subtract(a, b);
			//Results
			cout << "	" << a << fixed << setprecision(1) << " - " << b << " = " << rslts;
			cout << endl;

			break;

		case 'C':
			cout << "	Please enter two decimal numbers: ";
			//Multiplies a and b
			Multiply(a, b);

			break;

		case 'D':
			cout << "	Please enter two decimal numbers: ";
			//Divides a and b
			Divide(a, b);
	
			break;

		default:
			//Will only display if user inputs something that isn't A,B,C,D, or Q
			cout << "You have a wrong selection. Please try again." << endl;

			cout << "Choices must be 'A','B','C','D', or 'Q'" << endl;
			cout << "Please reenter: ";
			cout << endl;

			break;

		case 'Q':
			//Case Q and displays thank you message
			cout << "Thank you for using this application. Good-bye!";
			cout << endl;

			break;
		}



	} while (usr_inp != 'Q');
	//Message displays if user quits program
	cout << "Goodbye! Have a good day.";
	//Program ends
	return 0;
}
//Main ends 
void Menu();
float Add(float a, float b);
float Subtract(float a, float b);
void Multiply(float& a, float& b);
void Divide(float& a, float& b);
