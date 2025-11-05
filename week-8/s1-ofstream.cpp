#include <iostream>
#include <fstream> // file processing
#include <cstdlib> // for exit()

using namespace std;

int main(){
	// creates an ofstream object named outClientFile, file name = client.txt
	ofstream outClientFile("client.txt", ios::out);
	
	// check if file exist
	// if not, show a warning
	if(!outClientFile){
		cerr << "File could not be opened.\n";
		exit(EXIT_FAILURE);
	}
	
	// User input
	cout << "Enter account number, name, and balance. [Space Seperated]\n"
		 << "Sample: 1001 Avijit 100.20\n"
		 << "Enter EOF (Ctrl+Z in Windows/ Ctrl+D in Mac/Linux to end.\n";
		 
	// setup the variable and take the input
	int account;
	string name;
	double balance;
	
	// input
	while (true){
		if (cin >> account >> name >> balance){
			outClientFile << account << ' ' << name << ' ' << balance << endl;
			cout << "? ";
		} else if (cin.eof()){
			// end of file input marker
			cout << "\nEnd of File reached. Data Saved.\n";
			break;
		} else {
			// input error (missing or invalid erors)
			cerr << "Invalid input format, please re-enter (e.g., 100 Alex 50.28): \n";
			cin.clear(); // clear the failbit
			cin.ignore(1000, '\n'); // discards the invalid input	
		}
	}
	
	outClientFile.close(); // close the file. saved.
	
	return 0;
}
