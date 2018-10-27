#include <iostream>
using namespace std;

int main()
{
    string word, subWord;
	cin >> word;
	subWord = "cat";
	// create a substring for Caturday
    if (word.substr(0, 3) == subWord || word.substr(1, 3) == subWord ) {
        cout << "true";  
        }
	else {
			cout << "false";
		}
	
}
