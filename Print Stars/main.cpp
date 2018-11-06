#include <iostream>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

void printStars(int numStars) {
	while(numStars > 0) {
		cout << "*";
		numStars--;
	}
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    printStars(3);
    cout << endl;
    printStars(1);
    cout << endl;
    printStars(0);
    cout << endl;
    printStars(10); 
    cout << endl;
}
