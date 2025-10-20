#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

void die() {
	cout << "You dun goofed.\n";
	exit(0);
}

int main() {
	//This is equivalent to string filename; cout << "Please enter a filename\n"; cin >> filename;
	//But on one line instead of three, because I'm cool like that
	string filename = read("Please enter a filename:\n");
	//Next...
	//Do you remember how to open a file?
	ifstream case_file(filename);
	//How to check to see if the file opened successfully?
	if (!case_file) die();
	//How do you store data in a vector?
	vector<int> case_name;
	vector<int> choices;
	int cases_number = read(case_file);
	if (cases_number < 2) die();
	//How do you average values across a vector?
	cout << "Please enter a brief case to open\n";
	while (true) {
		int userInput = 0;
		case_name >> userInput;
		if (!case_name) break;
		case_name.pushback(userInput);
	}
	int sumOfCases = 0;
	int averageOfCases = 0;
	int size = case_name.size();
	while (true) {
		cout << "Please enter a briefcase to open:\n";
		int gambler = 0'
		cin >> gambler;
		if (!cin) die();
		//TODO: Game Logic (3.1, 3.2, 3.3, 3.4) 
	}
	cout << "You won " << dollarAmount << " dollars!\n";
}
