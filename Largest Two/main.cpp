#include <iostream>

using namespace std;

//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

void printLargestTwo(int values[], int NUM_VALUES) {
	int firstLarge = values[0], secondLarge = values[1];
	if(values[0] > values[1]) {
 		 secondLarge = values[1];
		 firstLarge = values[0];
	} else {
 		secondLarge = values[0];
 		firstLarge = values[1];
	}
	
	for(int i = 2; i < NUM_VALUES; i++) {
        if(values[i] >= firstLarge){  
        secondLarge = firstLarge;
        firstLarge = values[i];          
    }
    else if(values[i] > secondLarge){
        secondLarge = values[i];
    }
   }
	
	cout << firstLarge << " " << secondLarge;
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

    printLargestTwo(values, NUM_VALUES);
}
