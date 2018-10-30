#include <iostream>
#include <string>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

string stringTrim(string& word) {
	size_t index = word.length();
	word = word.substr(1, index - 2);
	return word;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    string word;
    cin >> word;
    stringTrim(word);
    cout << word<< endl;

}
