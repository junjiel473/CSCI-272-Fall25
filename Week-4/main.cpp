#include "Car.h"
#include <iostream>

//using namespace std;

int main(){
	// create a car object
	Car car1;
	
	//parameter
	Car car2("Honda","Civic",2024);
	
	//copy constructor
	Car car3(car2);
	
	//copy2
	Car car4(car3);
	
	// Call member functions
	car1.startEngine();
	car2.startEngine();
	car3.startEngine();
	car4.startEngine();
	
	car2.accelerate();
	car3.accelerate();
	
	// destructor is going to be called automatically
	return 0;
}