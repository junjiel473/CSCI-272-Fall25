#include <iostream>

using namespace std;

int factorial(int n){
	int holder = 1;
	for (int i = 1; i <= n; i++){
		holder = holder * i;
	}
	return holder;
}
int main(){
	int number;
	cout << "Enter a number:" << endl;
	cin >> number;
	int answer = factorial(number);
	cout << "The Factorial of " << number << " is " << answer << endl;
	return 0;
}