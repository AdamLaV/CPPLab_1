#include <iostream>
using namespace std;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

enum Direction {
	NORTH = 90,
	SOUTH = 270,
	EAST = 0,
	WEST = 180,
};

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{

    int d1;
    cin >> d1;

    //map values over 360 and greater back into 0-359 range
    d1 %= 360;

    if(d1 == NORTH) {
        cout << "North" << endl;
    }
    else if(d1 == SOUTH) {
        cout << "South" << endl;
    }
    else if(d1 == EAST) {
        cout << "East" << endl;
    }
    else if(d1 == WEST) {
        cout << "West" << endl;
    }
    else {
        cout << "Error" << endl;
    }

}
