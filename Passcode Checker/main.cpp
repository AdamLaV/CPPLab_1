#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char chOne, chTwo, chThree;
	cin >> chOne >> chTwo >> chThree;

	if(isdigit(chOne) || isdigit(chTwo) || isdigit(chThree)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}	
}
