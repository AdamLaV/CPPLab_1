#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    struct Car {
		string make;
		string model;
		int year;
	};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

int main()
{
    Car c1;
    c1.make = "Subaru";
    c1.model = "Legacy";
    c1.year = 2001;

    cout << c1.year << " " << c1.make << " " << c1.model << endl;

    return 0;
}
