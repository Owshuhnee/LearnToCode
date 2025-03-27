#include <iostream>	// Input/Output stream library. Without this, the program would not be able to take user input or display output
using namespace std; // Using the standard namespace, which allows us to use cout and cin without std::cout or std::cin

int main() {

	// Variables
	double num1, num2, result; // Variable double used in case decimal is used, num1 and num2 are the numbers to be calculated, sum is the result
	char o; // Variable char used for operator

	cout << "Enter first number: "; // User inputs first number
	cin >> num1;

	cout << "Enter operator: (+, -, *, /) "; // User inputs operator (+, -, *, /)
	cin >> o;

	cout << "Enter second number: "; // User inputs second number
	cin >> num2;

	switch (o) { // Switch statement to determine which operator to use based on user input
		
		case '+': //if operator is '+'
			result = num1 + num2; //Perform addition
			break; //End the case

		case '-': // If operator is '-'
			result = num1 - num2; //Subtraction
			break;	//End the case

		case '*': // if operator is '*'
			result = num1 * num2; // Perform multiplication
			break;	//end the case

		case '/': // if operator is '/'
			result = num1 / num2; // Perform division
			break;	//end the case

		default: // If the user inputs an invalid operator
			cout << "Invalid operator" << endl; // Output error message ending with a new line
			break; // End the case
	}

	cout << "Result: " << result; // Output result
	return 0; // Return 0 to end the program
}
