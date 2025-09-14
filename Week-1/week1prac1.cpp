#include <iostream>
using namespace std;

// Ask user how many people in class
//
// Ask for the scores and put it into a array
//
// Use function to find max score
//
// print the highest score

int maxScore (int scores[], int max){
	int highest = scores[0];
	for (int i = 1; i < max; i++){
		if (scores[i] > highest){
			highest = scores[i];
		}
	}
	return highest;
}

int main (){
	cout << "Number of Students: " << endl;
	int numStudent;
	cin >> numStudent;
	
	int scores[numStudent];
	cout << "What are the scores: " << endl;
	for (int i = 0; i < numStudent; i++){
		cin >> scores[i];
	}
	
	cout << "The Highest Score is: " << maxScore(scores, numStudent) << endl;
	return 0;
}