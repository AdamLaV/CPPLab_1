#include <iostream>
using namespace std;

int main()
{
    int player1, player2;
	int rock = 1, paper = 2, scissors = 3;
	cin >> player1 >> player2;
	
	if (player1 == player2) {
		cout << "tie";
	}
	else if (player1 == rock && player2 == scissors) {
		cout << "A";
	}
	else if (player1 == paper && player2 == rock) {
		cout << "A";
	}
	else {
		cout << "B";
	}	
}
