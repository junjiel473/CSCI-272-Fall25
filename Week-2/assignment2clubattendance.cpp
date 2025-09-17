#include <iostream>
#include <vector>

double getAverage (const std::vector<int>& list){
	double average; // stores the added value
	
	for (int add : list){ // range-based for loop that adds all the value
		average += add;
	}
	return average/list.size(); // returns the added value divided by the size of the vector (57145.2)
}

	int getHighest (const std::vector<int>& list){
		int highest = list.at(0); // stores the highest value, starts off with the first one
		for (int i = 1; i < list.size(); i++){ // index-based for loop that checks for the highest number
			if (list.at(i) > highest){ // checks if the current studentID is bigger than the current Highest StudentID
				highest = list.at(i); // replaces if current studentID is bigger
			}
		}
		return highest;
	}

int main (){
	
	std::vector<int> studentIDS = {78913,55056,69195,38953,51882,63427,15751,31218,70414,96643}; // vector storing 10 student IDS (hardcoded values)
	
	std::cout << "The Average Student ID: " << getAverage(studentIDS) << "\nThe Highest Student ID: " << getHighest(studentIDS) << std::endl;
	
	
	
	return 0;
}