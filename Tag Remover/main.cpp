#include <iostream>
using namespace std;

int main()
{
    string userInput, TAG, tagContent;
	getline(cin, userInput);
	
	int tagOpen = userInput.find("[");
	//int tagClose = userInput.find("]");
	
	// erase letter from beginning of tag
	string newWord = userInput.erase(0, tagOpen);
	// seperate the tage from the rest of the string
	int closeTagPosition = newWord.find("]");
	TAG = newWord.substr(0, closeTagPosition);
	// now remove the openning bracket 
	TAG = TAG.erase(0, 1); // TAG is complete 
	
	// get the tag content without brackets
	int taglength = TAG.length();
	newWord = newWord.erase(0, taglength + 2);
	int openTagPosition = newWord.find("[");
	tagContent += newWord.substr(0, openTagPosition);
	
	
	cout << TAG << ":" << tagContent;
}
