#include <iostream>
#include <string>
#include <cctype>

using namespace std;

// case insensitive comparison
bool caseInsensitiveCompare(const string& str1, const string& str2){
	if (str1.length() != str2.length()){
		return false;
	}
	for (size_t i = 0; i < str1.length(); i++){
		if (tolower(str1[i]) != tolower(str2[i])){
			return false;
		}
	}
	return true;
}

int main (){
	string str1 = "Hello";
	string str2 = "hallo";
	
	if (caseInsensitiveCompare(str1, str2)){
		cout << "Strings are case-insensitive equal" << endl;
	} else {
		cout << "Strings are NOT case-insensitive equal" << endl;
	}
	
	return 0;
}

//int main(){
////	string firstName = "John";
////	string lastName = "Doe";
////	
////	cout << "First name: " << firstName << endl;
//////	cin >> firstName;
////	
////	cout << "Last name: " << lastName << endl;
//////	cin >> lastName;
////	
////	string fullName = firstName + " " + lastName;
////		
////	cout << "Full Name: " << fullName << endl;
////	
////	fullName += " Jr.";
////	
////	cout << "Full Name with suffix: " << fullName << endl;
////	
//////	fullName = "Dr. " + fullName;
////	
////	fullName.insert(0, "Dr. ");
////	
////	cout << "Full Name with Prefix: " << fullName << endl;
//	
//	
//	
//	
//	
////	string message = "Hello, World!"; // 13 chars
////	
////	int messageLength = message.length();
////	int messageSize = message.size();
////	
////	cout << "Length: " << messageLength << endl << "Size: " << messageSize << endl;
////	
////	char firstChar = message[0];
////	char lastChar = message[message.length()-1]; // 13-1
////	
////	cout << "First Char: " << firstChar << endl << "Last Char: " << lastChar << endl;
//
//
//
//
//
//	string str1 = "Aapple";
//	string str2 = "abanana";
//	
//	if (str1 == str2){
//		cout << "Both strings are equal!" << endl;
//	} else if (str1 > str2){
//		cout << "str1 is lexicographically greater than str2." << endl;
//	} else {
//		cout << "str1 is lexicographically less than str2." << endl;
//	}
//	
//	return 0;
//}
