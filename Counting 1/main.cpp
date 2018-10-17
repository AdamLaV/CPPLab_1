#include <iostream>
using namespace std;

int main()
{
    int userNumber, secondNumber = 1;
	cin >> userNumber;
	
	while(userNumber > 0) {
		cout << secondNumber;
		secondNumber++;
		userNumber--;
	}
}
