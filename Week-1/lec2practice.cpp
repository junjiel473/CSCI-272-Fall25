#include <iostream>
using namespace std;

// Array Practice
//double average (double scores[], int size){
//	
//	double sum;
//	
//	for (int i = 0; i < 5; i++){ // Loop array to caculate Sum
//		sum += scores[i];
//	}
//	
//	cout << "Average is: " << sum/size << endl;
//		
//	return (double)sum/size;
//}
//
//int main(){
//	int size;
//	cout << "Give me a size: " << endl; // size given by user
//	cin >> size;
//	double scores[size]; // scores given by user
//	for (int i = 0; i < size; i++){ // asks user for scores
//		cout << "Give me a Number: " << endl;
//		cin >> scores[i];
//	}
//	return average(scores, size);
////	int maxNum;
////	cout << "How many Numbers do you want: " << endl;
////	cin >> maxNum;
////	int scores[maxNum];
////	int sum = 0;
////	
//
//	
////	for (int i = 0; i < 5; i++){ // Loop array to caculate Sum
////		sum += scores[i];
////	}
//	
////	return 0;
//}

int main(){
	int a = 15;
	int *p = &a;
	cout << p << endl;
	return 0;
}