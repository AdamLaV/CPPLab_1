#include <iostream>
#include <cmath>
#include <string>

using namespace std;

const string MONTH_NAMES[] = {"", "Jan", "Feb", "Mar",
                            "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep",
                            "Oct", "Nov", "Dec"};
struct Date {
    int month;
    int day;
    int year;
};

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

   void printDate(Date d1) {
	   cout<< MONTH_NAMES[d1.month] <<" "<< d1.day <<", " << d1.year
		   << endl;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    Date d1;
    cin >> d1.month;
    cin >> d1.day;
    cin >> d1.year;
    printDate(d1);
}
