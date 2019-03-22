#include <iostream>

using namespace std;

int addNegatives(int values[], int NUM_VALUES) {
	int negativeSum = 0;
	  for(int i = 0; i < NUM_VALUES; i++) {
      	if(values[i] < 0)
			negativeSum += values[i];
    }
	return negativeSum;
}

int main()
{
    int NUM_VALUES;  //cheating to make this flexible
    cin >> NUM_VALUES;
    int values[NUM_VALUES];
    //Read in values
    for(int i = 0; i < NUM_VALUES; i++) {
        cin >> values[i];
    }

    int sum = addNegatives(values, NUM_VALUES);
    cout << sum;
}
