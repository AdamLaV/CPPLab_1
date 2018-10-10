#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	const double PI = 3.14159;
    double angle, adjacentlLength;
	cin >> angle >> adjacentlLength;
	double angleRadians = (angle * PI) / 180;
	
	double hypotenuse = adjacentlLength / cos(angleRadians);
	cout << hypotenuse;
}
