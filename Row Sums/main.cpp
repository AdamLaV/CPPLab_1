#include <iostream>
#include <climits>


using namespace std;

const int NUM_COLS = 5;  

void printRowSums(const int values[][NUM_COLS], int numRows) {

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    for(int i = 0; i < numRows; i++){
    int sum = 0;
    for(int j = 0; j < NUM_COLS; j++)
        sum += values[i][j];
    cout<< sum <<" ";
}

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this

}

int main()
{
    int nums[2][NUM_COLS] = {{1, 2, 3, 4, 5},
                                    {11, 2, 3, 4, 5}};

    int nums2[5][NUM_COLS] = {{21, 2, 3, 4, 5}, 
                                {21, 2, 3, 4, 5}, 
                                {1, 12, 3, 4, 5}, 
                                {2, 2, 23, 4, 5}, 
                                {1, 2, 3, 24, 5}};

    
    printRowSums(nums, 2);
    cout << endl;
    printRowSums(nums2, 5);
    cout << endl;

    return 0;
}
