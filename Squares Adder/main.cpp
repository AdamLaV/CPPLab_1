#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int valuesToRead;
	cin >> valuesToRead;
	//cout << valuesToRead;
	
	int newValue, sum = 0;
	while(valuesToRead > 0) {
		cin >> newValue;
		sum += pow(newValue, 2);
		valuesToRead--;
	}
	
	cout << sum;
}
