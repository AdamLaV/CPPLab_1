#include <iostream>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

void findMidpoint(double x1, double y1, double x2, double y2, double& xMid, double& yMid) {
	xMid = (x1 + x2) / 2;
	yMid = (y1 + y2) / 2;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    double in1, in2, in3, in4;
    cin >> in1 >> in2 >> in3 >> in4;
    double m1 = 0, m2 = 0;
    findMidpoint(in1, in2, in3, in4, m1, m2);
    cout << m1 << "," << m2 << endl;
}
