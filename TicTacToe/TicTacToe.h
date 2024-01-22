#pragma once
#include <iostream>
#include <string>

#include "Player.h";
#include "TicTacToeFunction.h";
using namespace std;

class TicTacToe {
	TicTacToeFunction function;

	Player player1;
	Player player2;
public:
	void run() {
		cout << "¢ºPlease enter the first ";
		player1.inputName();
		cout << "¢ºPlease enter the first ";
		player1.inputMark();
		cout << "¢ºPlease enter the second ";
		player2.inputName();

		string player1Name = player1.getName();
		char player1Mark = player1.getMark();
		string player2Name = player2.getName();

		player2.inputMark(player1Mark);
		char player2Mark = player2.getMark();

		cout << "Now, your game starts!" << endl;
		function.drawBoard();

		int c = 0;
		while (1) {
			if (c % 2 == 0) {
				cout << player1Name << "'s turn." << endl;
			}
			else {
				cout << player2Name << "' turn." << endl;
			}

			int position = function.inputValue() - 1;

			if (c % 2 == 0) {
				function.putMark(position, player1Mark);
			}
			else {
				function.putMark(position, player2Mark);
			}
			c++;

			char winner = function.checkWinner();
			if (winner == 'O' || winner == 'X') {
				if (winner == player1Mark) {
					cout << player1Name << "win!" << endl;
					cout << "Game End" << endl;
					break;
				} else if(winner == player2Mark) {
					cout << player2Name << "win!" << endl;
					cout << "Game End" << endl;
					break;
				}
			}
			else {
				if (c == 9) {
					cout << "Draw" << endl;
					cout << "Game End" << endl;
					break;
				}
				else {
					continue;
				}
			}
		}
	}
	
};
