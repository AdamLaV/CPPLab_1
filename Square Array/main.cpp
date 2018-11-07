#include <iostream>

using namespace std;


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW


void squareArray(int array[], int destination[], int size) {
	for(int i = 0; i < size; i++) {
		int currentValue = array[i];
        destination[i] = array[i] * currentValue;
    }
}


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
int main()
{
    int NUM_VALUES;  //cheating to make this flexible
    cin >> NUM_VALUES;

    int values[NUM_VALUES];
    //Read in values
    for(int i = 0; i < NUM_VALUES; i++) {
        cin >> values[i];
    }

    int squares[NUM_VALUES];

    //Call your function
    squareArray(values, squares, NUM_VALUES);

    for(int i = 0; i < NUM_VALUES; i++) {
        cout << squares[i] << " ";
    }

    return 0;
}
