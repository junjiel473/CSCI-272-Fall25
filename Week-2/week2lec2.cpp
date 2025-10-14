#include <iostream>
#include <vector>

using namespace std;

int main (){
//	vector<int> numbers = {10,20,30,40,50};
//	
//	cout << "First element: " << numbers.front() << endl;
//	cout << "Last element: " << numbers.back() << endl;
//	cout << "Second element: " << numbers[1] << endl;
//	cout << "Third element: " << numbers.at(2) << endl;
//	
//	
//	// vector modifications
//	numbers[1] =35;
//	numbers.at(2) =35;
//	numbers.front() = 5;
//	numbers.back() = 5;
//	numbers.push_back(272);
//	
//	cout << "\n\n======After Modifications======\n\n";
//	cout << "First element: " << numbers.front() << endl;
//	cout << "Last element: " << numbers.back() << endl;
//	cout << "Second element: " << numbers[1] << endl;
//	cout << "Third element: " << numbers.at(2) << endl;
	
	// Round 2
	vector<int> numbers;
	
	numbers.reserve(2);
	cout << "First Element = " << numbers.front() << endl;
	cout << "Last Element = " << numbers.back() << endl;
	
	cout << "Reserved: " << endl << "Size = " << numbers.size() << ", Capacity = " << numbers.capacity() << endl << endl;
	
	numbers.push_back(10);
	cout << "After adding 10: " << endl << "Size = " << numbers.size() << ",Capacity = " << numbers.capacity() << endl;
	
	cout << "First Element = " << numbers.front() << endl;
	cout << "Last Element = " << numbers.back() << endl << endl;
	
	numbers.push_back(20);
	cout << "After adding 20: " << endl << "Size = " << numbers.size() << ",Capacity = " << numbers.capacity() << endl;
	
	cout << "First Element = " << numbers.front() << endl;
	cout << "Last Element = " << numbers.back() << endl << endl;
	
	numbers.push_back(40);
	cout << "After adding 40: " << endl << "Size = " << numbers.size() << ",Capacity = " << numbers.capacity() << endl;
	
	cout << "First Element = " << numbers.front() << endl;
	cout << "Last Element = " << numbers.back() << endl << endl;
	
	return 0;
}
