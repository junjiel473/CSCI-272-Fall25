#include <iostream>

using namespace std;

double calcRec (double length, double width){
	cout << "The Area is: " << length*width << endl;
	cout << "The Perimeter is: " << 2*(length+width) << endl;
}

int main(){
	cout << "Enter the Length: " << endl;
	double recLength;
	cin >> recLength;
	cout << "Enter the Width: " << endl;
	double recWidth;
	cin >> recWidth;
	calcRec(recLength, recWidth);
}