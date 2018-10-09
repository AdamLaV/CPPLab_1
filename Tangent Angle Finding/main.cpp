#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double oppositeSide, adjacentSide;
	cin >> oppositeSide >> adjacentSide;
	
	double angleX = atan(oppositeSide / adjacentSide);
	cout << angleX;
	
}
