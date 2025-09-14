# include <iostream>
#include <vector>

using namespace std;

//Find max for Integer
//Find max for Double

template <typename T>

T max (vector<T> nums){
	T biggest = nums.at(0);
	for (int i = 1; i < nums.size(); i++){
		if (nums.at(i) > biggest){
			biggest = nums.at(i);
		}
	}
	return biggest;
}

int main(){
	vector<int> intScore;
	intScore.reserve(2);
	cout << "Give me 5 Integer Numbers: " << endl;
	for (int i = 0; i < 5; i++){
		int holder;
		cin >> holder;
		intScore.push_back(holder);
	}
	
	vector<double> doubleScore;
	doubleScore.reserve(2);
	cout << "Give me 5 Double Numbers: " << endl;
	for (int i = 0; i < 5; i++){
		double holder;
		cin >> holder;
		doubleScore.push_back(holder);
	}
	
	cout << "The max Integer is: " << max(intScore) << endl;
	cout << "The max Double is: " << max(doubleScore) << endl;
	return 0;
}