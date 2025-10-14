#include <iostream>

class Car{
	private:
		std::string brand{"Honda"};
		std::string model = "Civic";
		int year {2025};
		
		
	// copy Constructor
	Car(const Car& other){
		brand = other.brand;
		model = other.model;
		year = other.year;
	}
		
	public:
		void startEngine(){
			std::cout << "Engine started for: " << year << " " << brand << " " << model << std::endl;
		}
		
		void accelerate(){
			std::cout << "Accelerate car " << model << std::endl;
		}
};

int main(){
	
	Car car1;
	
	car1.startEngine();
	car1.accelerate();
	
	return 0;
}

class Person{
	public:
		std::string name {"John Doe"};
		int age {30};
		char gender {'M'};
		
	public:
		void introduce(){
			std::cout << "I'm " << name << ". Age: " << age;
			
			if (gender == 'M'){
				std::cout << " I identify as a male" << std::endl;
			} else if (gender == 'M'){
				std::cout << " I identify as a female" << std::endl;
			} else {
				std::cout << " Gender not specified." << std::endl;
			}
		}
		
};
