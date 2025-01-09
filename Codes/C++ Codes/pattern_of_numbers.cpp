/*#include <iostream>
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
*/
#include <iostream>
using namespace std;

void printPattern(int n) {
    int size = 2 * n - 1;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            int min_dist = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << n - min_dist << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int size=2*n - 1;
//     for (int i = 0; i<size; i++)
//     {
//         for (int j = 0; j<(size+1); j++)
//         {
//             if((i>j) || ((size-1-i)>(size-1-j)))
//             {
//                 if(i<(size-1-i))
//                 {
//                     cout<<n-i;
//                 }
//                 else
//                 {
//                     cout<<n-(size-1-i);
//                 }
//             }
//             else if((j>i) || ((size-1-j)>(size-1-i)))
//             {
//                 if(j<(size-1-i))
//                 {
//                     cout<<n-j;
//                 }
//                 else
//                 {
//                     cout<<n-(size-1-j);
//                 }
//             }       
//         }
//         cout<<endl;
//     }
//     return 0;
// }