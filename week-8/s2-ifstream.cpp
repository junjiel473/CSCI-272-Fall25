#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void outputLine (int account, const string& name, double balance){
	cout << left << setw(10) << account
		 << setw(15) << name
		 << setw(10) << fixed << setprecision(2) << right << balance << endl;
}

int main(){
	
	ifstream inClientFile("client.txt", ios::in);
	
	if(!inClientFile){
		cerr << "File could not be opened!\n";
		exit(EXIT_FAILURE);
	}
	
	cout << left << setw(10) << "Account" << setw(15) << "Name" << setw(10) << right << "Balance" << endl;
	
	int account;
	string name;
	double balance;
	
	while (inClientFile >> account >> name >> balance){
		outputLine(account, name, balance);
	}
	
	return 0;
}