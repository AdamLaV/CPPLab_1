#include <iostream>
#include <string>
using namespace std;

int main()
{
    string vowel = "aeiouAEIOU";
	char userInput;
	cin >> userInput;
	for(int i = 0; i < vowel.length(); i++) {
		if (userInput == vowel.at(i)) {
			cout << "vowel";
		}
		else {
			
		}
	}
}
