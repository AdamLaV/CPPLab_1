#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int NUM_VALUES;  //cheating to make this flexible    
    cin >> NUM_VALUES;
    double values[NUM_VALUES];
    //Read in values
    for(int i = 0; i < NUM_VALUES; i++) {
        cin >> values[i];
    }

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW


    for(int i = 0; i < NUM_VALUES; i++) {
        if(values[i] < 0) {
			values[i] = 0;
		}
    }


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    for(int i = 0; i < NUM_VALUES; i++) {
        cout << values[i] << " ";
    }
    
    return 0;
}
