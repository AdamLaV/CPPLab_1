#include <iostream>
using namespace std;
int main()
{
    int i, j, k, n;
    cin >> n;
    for (k = 1; k <= n; k++)
    {
       for(j = 1; j <= n-k; j++)
            cout << ' ';
       for (i = 1; i <= 2*k-1; i++)
            cout << '*';
       cout << endl;
    }
}
