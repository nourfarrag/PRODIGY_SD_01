#include <iostream>
using namespace std;
void main()
{
	float temp;
	char unit;
	cout << "please enter the temperature" << endl;
	cin >> temp;
	cout << "please enter the unit you want to convert(C for Celsius, F for Fahrenheit, K for Kelvin)" << endl;
	cin >> unit;
	if (unit == 'C'||unit=='c')
	{
		cout << temp << "C is equal to " << (temp * 1.8) + 32 << "F and " << temp+273.15 << "K." << endl;
	}
	if (unit == 'F'||unit=='f')
	{
		cout << temp << "F is equal to " << (temp -32) / 1.8 << "C and " << (temp - 32) / 1.8 +273.15 << "K." << endl;
	}
	if (unit == 'K'||unit=='k')
	{
		cout << temp << "K is equal to " << (temp - 273.15) << "C and " << 1.8*(temp - 273.15)+32 << "F" << endl;
	}
}