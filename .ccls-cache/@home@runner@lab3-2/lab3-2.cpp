#include <iostream>
using namespace std;

int main() {
float Celsius;
float Fahrenheit; // Float used for decimal value inputs

	cout << "Enter a temperature in Fahrenheit: ";
	cin>> Fahrenheit;
	
	Celsius = (Fahrenheit - 32) * 5/9; // Formula for conversion
	
	cout << "The temperature in Fahrenheit is: " << Fahrenheit << endl;
	cout << "The temperature in Celsius is: " << Celsius << endl;
	
	return 0;
}
// End of program