#include <iostream>
using namespace std;

int main()
{
    char userInput, nextLetter;
	cin >> userInput;
	
	if(userInput + 1 == 'z') {
		nextLetter = userInput++;
		nextLetter++;
		userInput = 'a';	
	}
	else if(userInput + 1 > 'z') {
		nextLetter = 'a';
		userInput = nextLetter;
		userInput++;
	}
	else {
		userInput++;
		nextLetter = userInput++;
	}
	
	cout << nextLetter << userInput;
}
