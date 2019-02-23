#include <iostream>
#include <cmath>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

void solveQuadratic(double a, double b, double c, double& x1, double& x2) {
	x1 = (-b + (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
        x2 = (-b - (sqrt(pow(b, 2) - (4 * a * c)))) / (2 * a);
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    double answer1 = 0, answer2 = 0;
    double in1, in2, in3;
    cin >> in1 >> in2 >>  in3;
    solveQuadratic(in1, in2, in3, answer1, answer2);
    cout << answer1<< ", " << answer2 << endl;
}
