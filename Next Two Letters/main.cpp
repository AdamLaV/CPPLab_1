#include <iostream>
using namespace std;

int main()
{
    char userInput, nextLetter;
	cin >> userInput;
	
	userInput++;
	nextLetter = userInput++;
	
	if(nextLetter + 1 > 'z') {
		userInput = 'a';
	}
	
	cout << nextLetter << userInput;
}
