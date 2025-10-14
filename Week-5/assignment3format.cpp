#include <iostream>
#include <iomanip>
#include <string>
// Assignment 3
// Junjie Li: Formatted Output
using namespace std;

int main(){
	// place holder
	int numCourses = 10;
	string studentName = "John Smith";
	int credits = 3;
	double grade = 4.001;
	double total = 12.001;
	string courseName = "HIS 201";
	int credit = 12;
	double points = 42.10;
	double gpa = 3.51;
	string standing = "Good Standing";
	
	
//	cin >> studentName;
	// TOTAL DISTANCE 62
	// Header
	cout << setw(28) << setfill('=') << right << " Student";
	cout << left << setw(34) << setfill('=') << " Grade Report " << endl;
	
	// Student Name
	cout << "Student: " << studentName << "\n" << endl;
	
	// Sub Headers ( W 55 )
	cout << left  << setw(25) << setfill(' ') << "Course"
     << right << setw(10) << "Credits"
     << right << setw(10) << "GradePts"
     << right << setw(10) << "TotalPts" << endl;

	// Divider
	for (int i = 0; i <= 56; i++){
		cout << '-';
	}
	cout << endl;
	
	for(int i = 0; i <= numCourses; i++){
		// Courses
		cout << left  << setw(25) << courseName
	     << right << setw(10) << credits
	     << right << setw(10) << fixed << setprecision(2) << grade
	     << right << setw(10) << fixed << setprecision(2) << total
	     << endl;
	 }
	 
	// Divider
	for (int i = 0; i <= 56; i++){
		cout << '-';
	}
	cout << endl;
	
	// Sub Headers ( W 55 )
		cout << left << setw(30) << "Total Credits: "
		<< credit << endl;
		cout << left << setw(30) << "Total Points: "
		<< points << endl;
		cout << left << setw(30) << "Semester GPA: "
		<< gpa << endl;
	 cout << left << setw(30) << "Standing: "
		<< standing << endl;
	 
	// Divider
	for (int i = 0; i < 62; i++){
		cout << '=';
	}
	 
    cout << "\n\n\n\n\n\n\n";
     	
	return 0;
}
