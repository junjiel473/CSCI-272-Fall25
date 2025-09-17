#include <iostream>
#include <vector>

int main (){
	std::vector<std::string> menu; // menu dynamic array
	
	// First set of Menu Items using push_back
	menu.push_back("Pizza");
	menu.push_back("Hamburger");
	menu.push_back("Salad");
	menu.push_back("Pasta");
	menu.push_back("Hotdog");
	
	menu.insert(menu.begin()+1,"Chicken Nuggets"); // inserted new item at pos 2
	
	menu.erase(menu.begin()+3); // removed 4th dish using .erase()
	
	// range-based loop to print menu
	std::cout << "*****MENU*****" << std::endl;
	for (std::string i : menu){
		std::cout << i << std::endl;
	}
	
	return 0;
}