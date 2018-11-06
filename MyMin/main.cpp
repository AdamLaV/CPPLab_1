#include <iostream>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

int myMin(int num1, int num2) {
	if(num1 < num2) {
		return num1;
	}
	else {
		return num2;
	}
	
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << myMin(4, 8) << endl;
    cout << myMin(6, 3) << endl;
    cout << myMin(-2, -4) << endl;
}
