void turn(Gameboard &board, User user){
	int row, column;

	cout << user.getName() << "'s turn!\n";

	do {
		do {
			cout << "Enter row (between 0-3): ";	
			cin >> row;
		} while (row < 0 || row > 3);

		do {
			cout << "Enter column (between 0-3): ";
			cin >> column;
		} while (column < 0 || column > 3);

		if (board.getGameSpace(row, column) != '-')
			cout << "This tile is not empty. Choose another.\n";
	} while (board.getGameSpace(row, column) != '-');
	
	board.setGameSpace(row, column, user.getValue());
}

Gameboard::Gameboard(){
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4 ; j++){
			gameSpace[i][j] = '-';
		}
	}
}

void Gameboard::setGameSpace(int row, int column, char value){
	gameSpace[row][column] = value;
}

char Gameboard::getGameSpace(int row, int column){
	return gameSpace[row][column];
}

int Gameboard::checkResult(){
	// Return 1 for X victory, 2 for Y victory, 0 else

	// Counters for vertical, horizontal and diagonal
	int cvx, chx, cdx, cvy, chy, cdy, crdx, crdy;

	// Vertical and horizontal check
	for (int i = 0; i < 4; i++){
		cvx = chx = cvy = chy = 0;

		for (int j = 0; j < 4 ; j++){
			if (gameSpace[i][j] == 'x')
				cvx++;
			if (gameSpace[i][j] == 'y')
				cvy++;
			if (gameSpace[j][i] == 'x')
				chx++;
			if (gameSpace[j][i] == 'y')
				chy++;
		}

		if (cvx == 4 || chx == 4)
			return 1;
		if (cvy == 4 || chy == 4)
			return 2;
	}

	// Diagonal check
	cdx = cdy = crdx = crdy = 0;
	for(int i = 0; i < 4; i++){
		if (gameSpace[i][i] == 'x')
			cdx++;
		if (gameSpace[i][i] == 'y')
			cdy++;
		if (gameSpace[i][3-i] == 'x')
			crdx++;
		if (gameSpace[i][3-i] == 'y')
			crdy++;
	}

	if (cdx == 4 || crdx == 4)
		return 1;
	if (cdy == 4 || crdy == 4)
		return 2;

	return 0;
}

void Gameboard::printBoard(){
	cout << "Board:\n";

	cout << "\t0 1 2 3\n";

	for (int i = 0; i < 4; i++){
		cout << i << "\t";

		for (int j = 0; j < 4; j++){
			cout << gameSpace[i][j] << " ";
		}

		cout << "\n";
	}
}

void User::setName(string nameIn){
	name = nameIn;
}

void User::setValue(char valueIn){
	value = valueIn;
}

string User::getName(){
	return name;
}

char User::getValue(){
	return value;
}