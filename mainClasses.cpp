#include <string>

using namespace std;

class Gameboard{
	char gameSpace[4][4];
public:
	Gameboard();
	void setGameSpace(int row, int column, char value);
	char getGameSpace(int row, int column);
	int checkResult();
	int printBoard();
};

class User{
	string name;
	char value;
public:
	void setName(string nameIn);
	void setValue(char valueIn);
	string getName();
	char getValue();
};