#include <cstdio>
#include <cstring>

int main()
{
//Do not modify anything on or above the line below this
//YOUR_CODE_BELOW

    double amount; 
	char sign = '$';
	scanf("%lf", &amount);
	double rounded = ((int)(amount * 100 + .5) / 100.0);
	printf("%c""%.2lf", sign, rounded);

//YOUR_CODE_ABOVE
//Do not modify anything on or below the line above this
}
