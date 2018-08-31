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

}

void Gameboard::printBoard(){
	cout << "Board:\n";

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 4; j++){
			cout << gameSpace[i][j];
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