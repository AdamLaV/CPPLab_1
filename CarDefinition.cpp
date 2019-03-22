#include <iostream>
#include <cmath>
#include <string>

using namespace std;

    struct Car {
		string make;
		string model;
		int year;
	};

int main()
{
    Car c1;
    c1.make = "Subaru";
    c1.model = "Legacy";
    c1.year = 2001;

    cout << c1.year << " " << c1.make << " " << c1.model << endl;

    return 0;
}
