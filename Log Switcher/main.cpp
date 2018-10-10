#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double number;
	cin >> number;
	
	double power = log(number) / log(2);
	cout << power;
}
