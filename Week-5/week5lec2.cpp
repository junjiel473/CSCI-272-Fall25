#include <iostream>
#include <iomanip>
#include <string>
#include <sstream> // string stream

using namespace std;

class Person {
	public:
		string name;
		int age;
		string gender;
};

int main(){
//	string inputString = "Alice 30 Female";
//	
//	istringstream input(inputString);
//	
//	Person person1;
//	
//	input >> person1.name >> person1.age >> person1.gender;
//	
//	cout << "Name: " << person1.name << endl;
//	cout << "Age: " << person1.age << endl;
//	cout << "Gender: " << person1.gender << endl;

	const int SIZE = 80;
	char buffer[SIZE];
	
	cout << "Enter a sentence: \n";
	cin.read(buffer, 5);
	
	cout << "\nThe sentence entered: \n";
	cout.write(buffer, cin.gcount());
	cout << endl;
	cout << "Input # of char: " << cin.gcount() << endl;
	
	return 0;
}




