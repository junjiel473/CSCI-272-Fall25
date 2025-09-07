#include <iostream>

using namespace std;

    // -----------------------------
    // Pointers Basics:
    // &  -> "address of" operator (where a variable lives in memory)
    // *  -> "dereference" operator (go to the address and get/change the value)
    // ** -> "pointer to a pointer" (an address that stores another pointer)
    // -----------------------------
    
int main (){
	cout << "Give me a String of Number: " << endl;
	int digits;
	cin >> digits;
	cout << "This is your id Number: " << digits << endl;
	
	int *change = &digits;
	int **final = &change;

	cout << "Enter a new set of Number: " << endl;
	cin >> *change;
	
	cout << "Your old id Number: " << **final << "\nYour new id Number: " << *change << endl;


	
	return 0;
}