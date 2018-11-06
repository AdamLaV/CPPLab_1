#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NUM_VALUES = 5;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW


    double values[5] = {1.6, 3.1, 8.3, 9.1, 4.8 };


//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    for(int i = 0; i < NUM_VALUES; i++) {
        cout << values[i] << " ";
    }
    
    return 0;
}
