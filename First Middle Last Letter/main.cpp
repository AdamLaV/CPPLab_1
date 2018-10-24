#include <iostream>
using namespace std;

int main()
{
    string word, firstCharacter, lastcharacter, middleCharacter;
	cin >> word; // read in the string
	
	int length = word.length(); // get the length of string 
	firstCharacter = word.at(0); // get first character
	lastcharacter = word.back(); // get the last character
	
	// even middle character
	if(length % 2 == 0) {
		middleCharacter = word.substr((length / 2), 1);
	}
	 // odd middle character
	else if (length % 2 == 1) {
		middleCharacter = word.substr((length / 2), 1);
	}

	// output the result 
	cout << firstCharacter << middleCharacter << lastcharacter;
	
}
