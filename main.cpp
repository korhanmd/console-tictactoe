#include <iostream>
#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main(){
	User userX, userO;
	string nameX, nameO;
	Gameboard board;

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

	return 0;
}