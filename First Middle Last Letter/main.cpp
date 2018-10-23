#include <iostream>
using namespace std;

int main()
{
    string word, firstCharacter, lastcharacter, middleCharacter;
	int length;
	cin >> word;
	
	length = word.length();
	if(length % 2 == 0) {
		//middleCharacter = 
	}
	firstCharacter = word.at(0);
	lastcharacter = word.back();
	cout << firstCharacter << lastcharacter;
	
}
