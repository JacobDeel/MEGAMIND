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
	size_t n = 5;
	if (n < 2) die();
	//How do you store data in a vector?
	vector<int> case_name;
	vector<int> choices;
	//How do you average values across a vector?
	int inputUser = 0;
	int sumOfCases = 0;
	cout << "Please enter a brief case to open\n";
	while (true) {
		cin >> inputUser;
		if (inputUser == -1) {
			break;
		}
		// When we do if statements for the cases (will fill in later)
		sumOfCases = sumOfCases; //what will be leftover from the vector
	}
}
