#include <iostream>
using namespace std;
int main() {
	float fahrenheit;
	cout << "masukkan nilai fahrenheit";
	cin >> fahrenheit;
	
	float Celcius = (fahrenheit - 32) * 5/9 ;
	cout << "suhu dalam Celcius" << Celcius ;
	return 0;
}
