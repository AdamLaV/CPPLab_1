#include <iostream>
using namespace std;
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

char getBMICategory(double weight, double height) {
	char weightChecker;
	double BMI = (weight / (height * height)) * 703;
	if(BMI < 18.5) {
		weightChecker = 'U';
	}
	else if(BMI >= 18.5 && BMI < 25) {
		weightChecker = 'N';
	}
	else if(BMI > 25) {
		weightChecker = 'O';
	}
	
	return weightChecker;
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    cout << getBMICategory(120, 72) << endl;
    cout << getBMICategory(220, 60) << endl;
    cout << getBMICategory(150, 72) << endl;
}
