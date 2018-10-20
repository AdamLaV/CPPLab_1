#include <iostream>
using namespace std;

int main()
{
    int number;
	cin >> number;
	
	for(int i = 0; i < number; i++) {
		for(int j = 0; j < number - 1; j++) {
			cout << "*";
		}
		cout << "*" << endl;
	}
}
