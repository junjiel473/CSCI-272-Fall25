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


/*
PART B: SHORT REFLECTION

What is Big-O Notation?
Big-O Notation describes how long it takes your code to run in relation to the size of the input. It's basically a measurement of how effective your code is. If it's effective, it should take around the same amount of time to run your code no matter the size of the input. While on the other hand, it'll ineffective if it takes proportionally longer based on the size of your input.

Why is Big-O important for programmers?
Big-O is important for programmers as it gives them a sense of how effectively their code runs, like searching through a class roster for a name. You wouldn't want to spend all of the class time looking through each name for attendance every day, as it wastes a bunch of time, so if you just know where each student was, you can shorten that down and give you more time to actually cover important topics.

Why was vector a better choice than array for this problem? (Scenario Part A)
A vector was a better choice than an array for both scenarios in part A because it allows for the addition and removal of elements. For example, for the cafeteria menu, items would be constantly removed and added, so the size of the menu would constantly change. So it's much better to have a dynamic array that allows for easy adding and removal than a static one where the size cannot be adjusted. It's also basically the same for the attendance scenario, as people can come and go, so having a dynamic array allows for the easy removal and addition of new students/elements.
*/