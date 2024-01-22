#pragma once
#include <iostream>

using namespace std;

class TicTacToeFunction {

	char board[9] = {
		'1', '2', '3',
		'4', '5', '6',
		'7', '8', '9'
	};

public:
	void drawBoard() {
		cout << "-------------" << endl;
		for (int n = 1; n <= 9; n++) {
			if (n % 3 == 1) {
				cout << "| " << board[n - 1] << " |";
			}
			else if (n % 3 == 2) {
				cout << " " << board[n - 1] << " |";
			}
			else if (n % 3 == 0) {
				cout << " " << board[n - 1] << " |" << endl;
				cout << "-------------" << endl;
			}

		}
	}

	bool checkValidity(int position) {
		position = position - 1;
		if (board[position] == 'O' || board[position] == 'X') {
			cout << "That spot is already occupied." << endl;
			cout << "Please select another spot!" << endl;
			return false;
		}
		return true;
	}

	int inputValue() {
		int value;
		cout << "Please enter the number of the spot." << endl;
		while (1) {
			cout << ">>> ";
			cin >> value;
			if (cin.fail()) {
				cout << "You can only enter the number from 1 to 9." << endl;
				cin.clear();
				cin.ignore(100, '\n');
				continue;
			}
			if (value <= 0 or value >= 10) {
				cout << "You can only enter the number from 1 to 9." << endl;
				continue;
			}
			else {
				if (!checkValidity(value)) {
					continue;
				}
				return value;
			}
		}
		return 0;
	}

	void putMark(int position, char mark) {
		board[position] = mark;
		drawBoard();
	}

	char checkWinner() {
		for (int i = 0; i < 7; i += 3) {
			if ((board[i] == board[i + 1]) && (board[i + 1] == board[i + 2])) {
				return board[i];
			}
		}
		for (int i = 0; i < 3; i++) {
			if ((board[i] == board[i + 3]) && (board[i + 3] == board[i + 6])) {
				return board[i];
			}
		}
		if ((board[0] == board[4]) && (board[4] == board[8])) {
			return board[0];
		}
		if ((board[2] == board[4]) && (board[4] == board[6])) {
			return board[2];
		}
		return 0;
	}
};