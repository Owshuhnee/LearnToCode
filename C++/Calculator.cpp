#include <iostream>	// Input/Output stream library. Without this, the program would not be able to take user input or display output
using namespace std; // Using the standard namespace, which allows us to use cout and cin without std::cout or std::cin

int main() {

	// Variables
	double num1, num2, result; // Variable double used in case decimal is used, num1 and num2 are the numbers to be calculated, sum is the result
	char o;

	cout << "Enter first number: "; // User inputs first number
	cin >> num1;

	cout << "Enter operator: (+, -, *, /) "; // User inputs operator (+, -, *, /)
	cin >> o;

	cout << "Enter second number: "; // User inputs second number
	cin >> num2;

	switch (o) { // Switch statement to determine which operator to use based on user input
		
		case '+': // Addition
			result = num1 + num2;
			break;

		case '-': // Subtraction
			result = num1 - num2;
			break;	

		case '*': // Multiplication
			result = num1 * num2;
			break;

		case '/': // Division
			result = num1 / num2;
			break;

		default: // If the user inputs an invalid operator
			cout << "Invalid operator" << endl;
			break;
	}

	cout << "Result: " << result; // Output result
	return 0;
}