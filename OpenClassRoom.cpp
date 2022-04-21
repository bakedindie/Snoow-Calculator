#include <iostream> // Includes the Input/Output stream library.
#include <cmath> 

using namespace std; // Calls the "std" namespace so it won't have to be written in every line of code.

double Addition(double a, double b)
{
	double addition = a + b;
	return addition;
}

double Multiplication(double a, double b)
{
	double multiplication = a * b;
	return multiplication;
}

double Substraction(double a, double b)
{
	double substraction = a - b;
	return substraction;
}

double Division(double a, double b)
{
	double division = a / b;
	return division;
}

int main()
{
	double a = 0;
	double b = 0;
	int operation = 0;

	cout << "Welcome to the Snoow Calculator v0.0.1a! " << endl;
	cout << " " << endl;
	
	cout << "1. Addition : " << endl;
	cout << "2. Multiplication : " << endl;
	cout << "3. Substraction :" << endl;
	cout << "4. Division :" << endl;
	cout << "Please select an operation's number : " << endl;
	cin >> operation;
	cout << "Please enter the first number : " << endl;
	cin >> a;
	cout << "Please enter the second number : " << endl;
	cin >> b;


	
	
	
}

