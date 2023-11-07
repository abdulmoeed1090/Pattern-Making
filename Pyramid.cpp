// c++ program to make a pyramid
#include <iostream>
using namespace std;
void pyramidPattern(int rows)
{
    // using for-loop
    for (int i = 1; i <= rows; i++)
    {
        // nested for-loops
        for (int j = 1; j <= rows - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

// main function
int main()
{
    // variable
    int rows;
    cout << "Enter the number of rows:";
    cin >> rows;
    // calling the function
    pyramidPattern(rows);
    return 0;
}
