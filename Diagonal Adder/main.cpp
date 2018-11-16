#include <iostream>

using namespace std;

int main()
{
    const int NUM_ROWS = 5;  
    const int NUM_COLS = 5;  
    int nums[NUM_ROWS][NUM_COLS];
    //Read in values
    for(int i = 0; i < NUM_ROWS; i++) {
        for(int j = 0; j < NUM_COLS; j++) {
             cin >> nums[i][j];
        }
    }


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

	int sum1 = 0, sum2 = 0;
    for(int i = 0; i < NUM_ROWS; i++) {
        for(int j = 0;j < NUM_ROWS; j++){
            if(i == j)
                sum1 += nums[i][j];
            if(i + j == (NUM_ROWS - 1))
                sum2 += nums[i][j];
        }
	}
	
	cout << sum1 << " " << sum2;

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
    
    return 0;
}
