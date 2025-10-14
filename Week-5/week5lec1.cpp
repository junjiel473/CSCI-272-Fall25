// Streams

//#include <iostream>

//using namespace std;

//int main(){
//	int number;
//	
//	std::cout << "Enter a number: " << std::endl;
//	std::cin >> number;
//	std::cout << "You entered: " << number << std::endl;
//	
//	std::cerr << "This is an error message\n";
//	std::clog << "This is a log message\n";
//	
//	return 0;
//}

//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main(){
//	string item = "Coffee";
//	double price = 2.5;
//	double tax = 0.201;
//	double total = price+tax;
//	
//	cout << setw(10) << left << "Item" << setw(10) << right << "Price" << endl;
//	cout << setw(10) << left << item << setw(10) << right << fixed << setprecision(5) << total << endl;
//	cout << setw(10) << setfill('-') << "Menu" << endl << setw(10) << left << item << setw(10) << right << total << endl;
//	
//	
//	return 0;
//}

#include <iostream>

using namespace std;

class Card {
	public:
		int cardNumber;
		string cardHolder;
		
};

// typeof alias CardPtr to for Card
typedef Card* CardPtr; // CardPtr is an alias of Card*

// fun part
typedef double DB; // DB is an alias of double
typedef int ROY;

int main(){
	// create a new card object
	Card myCard;
	
	DB num = 3.1416;
	ROY ph = 0001;
	
	myCard.cardNumber = 10;
	myCard.cardHolder = "Alice";

	CardPtr ptrToCard = &myCard;
	
	cout << "Card# " << ptrToCard -> cardNumber << endl;
	cout << "Card Holder " << ptrToCard -> cardHolder << endl;
	cout << num << endl;
	cout << ph;
	
	return 0;
}















