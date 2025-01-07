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
