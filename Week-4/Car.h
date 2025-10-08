#include <iostream>
#include <string>

//using namespace std;
// Define a class named Car

class Car{
	private:
		std::string brand = "Toyota";
		std::string model = "Camry";
		int year = 2022;
		
	public:
		Car(){
			// nothing here, the defaults already handle it.
		}
		
		// Destructor
		~Car(){
			std::cout<<"Destroy "<<brand<<" "<<model<<" "<<year<<std::endl;
		}
		
		// Parameterized Constructor
		Car(std::string b, std::string m, int y){
			brand = b;
			model = m;
			year = y;
		}
		
		// Copy Constructor
		Car(const Car &other){
			brand = other.brand;
			model = other.model;
			year = other.year + 1;
		}
		
		// Member function
		void startEngine(){
			std::cout<<"Start Engine for: "<<"Brand: "<<brand<<" | Model: "<<model<<" | Year: "<<year<<std::endl;
		}
		
		//Member Function
		void accelerate(){
			std::cout<<"Accelerate engine "<<"Brand: "<<brand<<" | Model: "<<model<<" | Year: "<<year<<std::endl;
		}
};










