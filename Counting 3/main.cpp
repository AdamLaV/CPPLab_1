#include <iostream>
using namespace std;

int main()
{
    char firstCharacter, secondCharacter;
	cin >> firstCharacter >> secondCharacter;
	
	while(firstCharacter <= secondCharacter) {
		if(firstCharacter == secondCharacter) {
			cout << firstCharacter;
		}
		else {
		cout << firstCharacter << ",";

		}
			firstCharacter++;
	}
}
