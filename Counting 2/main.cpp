#include <iostream>
using namespace std;

int main()
{
    int start, increment, end;
	cin >> start >> increment >> end;
	
	while(start <= end) {
		cout << start;
		start += increment;
	} 
	
	if(start - 1 == 30) {
		cout << start;
	}
}
