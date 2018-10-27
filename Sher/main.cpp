#include <iostream>
using namespace std;

int main()
{
    string word;
	cin >> word;
	
	int secondLastChar = word.length() - 2;  // second last character index 
	if(word.length() <= 4) {
		cout << word;
	} 
	else {
		cout << word.at(0) << word.at(1) << word.at(secondLastChar) << 					word.back(); 
	}
}
