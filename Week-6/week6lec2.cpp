//#include <iostream>
//#include <sstream>
//#include <iomanip>
//
//using namespace std;
//
//int main(){
//	ostringstream oss; // output string stream object oss
//	
//	string name = "Alice";
//	int score = 95;
//	double gpa =3.876;
//	
//	// build a message using oss
//	oss << "Student: " << name 
//	<< " | Score: " << score 
//	<< " | GPA: " << fixed << setprecision(2) << gpa;
//	
//	// convert the stream into a string
//	string message = oss.str();
//	
//	ostringstream oss1; // created a new object
//	oss1 << "test Data" << endl; // new stream
//	
//	cout << message << endl;
//	cout << oss1.str() << endl; // print the string of oss1
//	
//	return 0;
//}

//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int main(){
//	string input = "100 hello 3.5";
//	istringstream iss(input); // stream containing 100 & 3.5
//	
//	int quantity; // integer 0
//	double price; // double 0.0
//	
//	iss >> quantity >> price;
//	
//	cout << "Total cost: " << (quantity * price) << endl;
//	cout << quantity << endl;
//	cout << price << endl;
//
//	return 0;
//}

// fail() and clear()

//#include <iostream>
//#include <sstream>
//
//using namespace std;
//
//int main(){
//	string data = "7 ate 9"; // int string int
//	istringstream iss(data); // creating input string stream object named iss
//	
//	int value; // 7, 9
//	while(iss >> value){
//		cout << "Read int: " << value << endl;
//	}
//	
//	// when a bad token stops the extraction
//	if (iss.fail()){
//		cout << "Stream failed. Skipping bad token..." << endl;
//		iss.clear(); // clearing the fail state
//		string bad;
//		iss >> bad;
//		cout << bad << endl;
//	}
//	
//	// resume reading the next values
//	while (iss >> value){
//		cout << "Read int cont: " << value << endl;
//	}
//	
//	cout << value;
//		
//	return 0;
//}

#include <iostream>
#include <sstream>

using namespace std;

int main(){
	string data{"Input Test 123 4.7 A"};
	
	istringstream iss(data);
	
	string exString1;
	string exString2;
	int exInt;
	double exDouble;
	char exChar;
	
	iss >> exString1 >> exString2 >> exInt >> exDouble >> exChar;
	
	cout << "The following items were extracted from istringstream object: "
	<< "\nString: " << exString1
	<< "\nString: " << exString2
	<< "\n   int: " << exInt
	<< "\ndouble: " << exDouble
	<< "\n  char: " << exChar << endl;
	
	long value;
	iss >> value;
	
	if (iss.good()){
		cout << "Value is: " << value << endl;
	} else {
		cout << "\nISS exploded. It's empty. EOF." << endl;
	}

	return 0;
}