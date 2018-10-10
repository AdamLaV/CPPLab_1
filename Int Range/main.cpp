#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double decimalValue;
	cin >> decimalValue;
	
	int smallValue = floor(decimalValue);
	int largeValue = ceil(decimalValue);
	cout << smallValue << " " << largeValue;
}
