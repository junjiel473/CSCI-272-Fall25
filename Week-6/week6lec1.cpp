#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string input;
	int number;
	
	cout << "Enter an integer between 0 and 100: ";
	cin >> input;

	istringstream iss(input); // created a stream from a string (input)
	
	if (iss >> number){
		if (number >= 0 && number <=100)
			cout << "Valid Input: " << number << endl;
		else
			cout << number << " out of range!\n";
	} else {
		cout << "INVALID input (not an integer)\n";
	}
	
	
	
	
	return 0;
}