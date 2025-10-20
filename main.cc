#include "/public/read.h"
#include <fstream>
#include <vector>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <numeric>
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
//*TODO ??	if (cases_number < 2) die();
	//How do you average values across a vector?
	while (true) {
		int userInput = 0;
		case_file >> userInput;
		if (!case_file) break;
		case_name.push_back(userInput);
	}
	int sumOfCases = 0;
	int averageOfCases = 0;
	int permaSize = case_name.size();
	int tempSize = permaSize;
	int dollarAmount = 0;
	int remainingCaseIndex = 0;
	while (true) {
		if (tempSize == 1) {
			for (int i = 0; i < permaSize; i++) {
				if (case_name.at(i) != 0) {
					remainingCaseIndex = i;
				}
			}
			dollarAmount = case_name.at(remainingCaseIndex);
		}
		cout << "Please enter a briefcase to open:\n";
		int gambler = 0;
		cin >> gambler;
		if (!cin) die();
		//TODO: Game Logic (3.1, 3.2, 3.3, 3.4)
		if (gambler == -1) {
			dollarAmount = averageOfCases;
			break;
		}
		if (gambler > permaSize) die();
		if (gambler < 0 && gambler != -1) die();
		choices.push_back(gambler);
		auto it = find(choices.begin(), choices.end(), gambler);
		if (it != choices.end()) die();
		cout << "That briefcase held " << case_name.at(gambler - 1) << " dollars" << endl;
		tempSize--;
		sumOfCases = accumulate(case_name.begin(), case_name.end(), 0);
		averageOfCases = case_name.empty() ? 0 : sumOfCases / tempSize;
		cout << "I will offer you " << averageOfCases << " dollars to walk away." << endl;
	}
	cout << "You won " << dollarAmount << " dollars!\n";
}
