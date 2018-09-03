#include <iostream>
#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main(){
	User userX, userO;
	string nameX, nameO;
	Gameboard board;
	int row, column;

	userX.setValue('x');
	userO.setValue('o');

	cout << "Enter the name of X player: ";
	getline(cin, nameX);
	userX.setName(nameX);

	cout << "Enter the name of O player: ";
	getline(cin, nameO);
	userO.setName(nameO);

	cout << "X player: " << userX.getName() << endl;
	cout << "O player: " << userO.getName() << endl;

	board.printBoard();

	for (int i = 0; i < 16; i++){
		if (i % 2 == 0){
			cout << userX.getName() << "'s turn. Enter row: ";
			cin >> row;
			cout << "Enter column: ";
			cin >> column;
			board.setGameSpace(row, column, userX.getValue());
		}
		else if (i % 2 == 1){
			cout << userO.getName() << "'s turn. Enter row: ";
			cin >> row;
			cout << "Enter column: ";
			cin >> column;
			board.setGameSpace(row, column, userO.getValue());
		}

		board.printBoard();
	}

	return 0;
}