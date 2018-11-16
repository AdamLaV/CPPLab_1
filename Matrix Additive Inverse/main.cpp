#include <iostream>

using namespace std;

const int NUM_ROWS = 3;  
const int NUM_COLS = 3;  

void additiveInverse(int matrix[NUM_ROWS][NUM_COLS]) {


//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

	for (int i = 0; i < NUM_ROWS; i++) {
        matrix[NUM_ROWS][i] *= -1; 

        for (int j = 0; j < NUM_ROWS; j++){
            matrix[j][i] *= -1;
        }
    } 

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}

int main()
{
    int nums[NUM_ROWS][NUM_COLS];
    //Read in values
    for(int i = 0; i < NUM_ROWS; i++) {
        for(int j = 0; j < NUM_COLS; j++) {
             cin >> nums[i][j];
        }
    }

    additiveInverse(nums);

    for(int i = 0; i < NUM_ROWS; i++) {
        for(int j = 0; j < NUM_COLS; j++) {
             cout << nums[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
