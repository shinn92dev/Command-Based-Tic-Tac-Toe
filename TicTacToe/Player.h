#pragma once
#include <iostream>
#include <string>

using namespace std;

class Player {
	string name; // Player's name
	char mark; // Player's mark(O or X)
public:
	void inputName() {
		cout << "name: ";
		cin >> name;
	};

	string getName() const {
		return name;
	};

	void inputMark(char m = 0) {
		if (m == 'O' || m == 'X') {
			if (m == 'O') {
				mark = 'X';
			}
			else {
				mark = 'O';
			}
		}
		else {
			while (1) {
				cout << "mark: ";
				cin >> mark;
				if (mark == 'O' || mark == 'X') {
					break;
				}
				else {
					cin.clear();
					cin.ignore(100, '\n');
					cout << "Only capital 'O' and 'X' can be acceptable. "
						<< "Please enter again." << endl;
				}
			}
		}

	}
	char getMark() const {
		return mark;
	}

};
