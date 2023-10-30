#include <iostream>
using namespace std;
// main function
int main()
{
    // varianle
    int n;
    cout << "Enter number of rows:";
    cin >> n;
    // using for-loop
    for (int row = 1; row <= n; row++)
    {
        for (int col = 0; col <= n - row; col++)
        {
            cout << "+";
        }
        cout << endl;
    }
    return 0;
}