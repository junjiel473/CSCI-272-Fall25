#include <iostream>
#include <string>

bool palindromeCheck (std::string x){
	
	std::string loopOutput;
	for (int i = x.size()-1; i >= 0; i--){ // reverse the order
		loopOutput += x[i];
	}
	
	for (char& y : loopOutput){ // to lower case
		y = std::tolower(y);
	}
	for (char& y : x){ // to lower case
		y = std::tolower(y);
	}
	
//	std::cout << loopOutput << std::endl; Test check
	
	if (loopOutput == x){ // checking if they match
		return true;
	} else {
		return false;
	}
}

int main (){
	std::cout << "Input a word and I'll check if it's a palindrome or not (palindrome are words that are the same forward and backward): " << std::endl;
	std::string userInput;
	std::cin >> userInput;
	
	if (palindromeCheck(userInput)){
		std::cout << "Yes! The word you inputed is a palindrome!" << std::endl;
	} else{
		std::cout << "Sorry! The word you inputed is not a palindrome!" << std::endl;
	}
	
	return 0;
}