//#include <iostream>
//
//using namespace std;
//
//// .h file
//class MyNumber{
//	private:
//		int value; // internal stored int;
//	public:
//		// constructor
//		MyNumber(int val = 0){
//			value = val;
//		}
//		
//		// getter to read the stored value
//		int getValue() const {
//			return value;
//		}
//		
//		// overload the Minus: -num
//		// this will not change the original object
//		MyNumber operator-() const {
//			return MyNumber(-value);
//		}
//		
//		// overload the prefic ++: ++num
//		// this will change the current object (increments value)
//		MyNumber operator ++() {
//			++value;
//			return MyNumber(value);
//		}
//};
//
//// main.cpp
//int main(){
//	MyNumber num(10);
//	
//	cout << "Original value is " << num.getValue() << endl;
//	
//	// using the overloaded unariy minus operator
//	MyNumber negative = -num; // call the MyNumber::operator-()
//	cout << "After applying -num: " << negative.getValue() << endl;
//	
//	// use overloaded prefic ++ operator
//	MyNumber incremented = ++num;
//	cout << "After applying ++num, num is: " << num.getValue() << endl;
//	cout << "Value returned by the ++num: " << incremented.getValue() << endl;
//	
//	return 0;
//}

// Binary Operator Overloading Example
#include <iostream>

using namespace std;

class Integer{
	private:
		int value; // actual integer value we will wrap
	public:
		//constructor
		Integer(int val = 0){
			value = val;
		}
		
		// getter to read stored value
		int getValue() const {
			return value;
		}
		
		// overload the binary + operator to add two integer objects
		// ex. Integer c = a + b
		Integer operator+(const Integer& other) const {
			return Integer(this->value + other.value);
		}
};

// main.cpp
int main(){
	Integer num1(19); // object 1
	Integer num2(20); // object 2
	
	// call numb1.operator+(num2)
	Integer sum = num1 + num2; // object 3 to store the result
	
	cout << "Num 1: " << num1.getValue() << endl;
	cout << "Num 2: " << num2.getValue() << endl;
	
	cout << "Sum (num1 + num2): " << sum.getValue() << endl;
	
	return 0;
}








