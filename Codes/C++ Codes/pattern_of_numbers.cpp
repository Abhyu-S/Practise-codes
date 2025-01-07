#include <iostream>
using namespace std;

void printPattern(int n)
{
    int size = 2 * n - 1;
    int matrix[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int minDistance = min(min(i, j), min(size - i - 1, size - j - 1));
            matrix[i][j] = n - minDistance;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printPattern(n);
    return 0;
}