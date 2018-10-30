#include <iostream>
#include <iomanip>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

double celsiusToFahrenheit(double celsius) {
	double fahrenheit = (9.0 / 5) * celsius + 32;
	return fahrenheit;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << fixed << setprecision(1);
    double t1 = celsiusToFahrenheit(40);
    cout << t1 << endl;
    double t2 = celsiusToFahrenheit(32.0);
    cout << t2 << endl;
}
