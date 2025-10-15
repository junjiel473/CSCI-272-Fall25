#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// function declaration

bool isValidPhoneNumber(const string& input);

int main(){
	string input;
	
	do{
		cout << "Enter a U.S. Phone Number (e.g., (800)222-4455): ";
		getline(cin, input);
		
		if (!isValidPhoneNumber(input)){
			cout << "Invalid input, try again\n";
		}
	} while (!isValidPhoneNumber(input));
	
	cout << "Valid Input \n";
	
	// call a validation function
//	if (isValidPhoneNumber(input)){
//		cout << "VALID! Coooool..." << endl;
// 	} else {
// 		cout << "INVALID XXXXXXXXXX, follow the format!" << endl;
//	 }
	 
	 
	 return 0;
}

// function definition
bool isValidPhoneNumber(const string& input){
	istringstream iss(input);
	
	char openParen, closeParen, dash;
	int areaCode, firstPart, secondPart;
	
	if (iss >> openParen >> areaCode >> closeParen >> firstPart >> dash >> secondPart){
		if (openParen == '(' && closeParen == ')' && dash == '-' && areaCode >=100 && firstPart >=100 && firstPart <=999 && secondPart >= 1000){
			return true;
		}
	}
	return false;
}












