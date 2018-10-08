#include <iostream>
using namespace std;

int main()
{
	// A-J group 1
	// K-P group 2
	// Q-Z group 3
    char userInput;
	cin >> userInput;
	if(userInput >= 'A' && userInput <= 'J') {
		cout << 1;
	}
	else if(userInput >= 'K' && userInput <= 'P') {
		cout << 2;
	}
	else if(userInput >= 'Q' && userInput <= 'Z') {
		cout << 3;
	}
}
