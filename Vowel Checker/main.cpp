#include <iostream>
#include <cctype>
using namespace std;

int main()
{
 	char character;
	cin >> character;
	char newCharacter = tolower(character);
	if(newCharacter == 'a' || newCharacter == 'e' || newCharacter == 'i' || newCharacter == 'o' || newCharacter == 'u') {
		cout << "vowel";
	}
	else {
		cout << "consonant";
	}

}
