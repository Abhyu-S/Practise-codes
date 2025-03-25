#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;  // Input n, l, r
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];  // Input first n elements of the sequence
        }

        // Since l == r in this problem, we only need to compute one value
        long long idx = l - 1;  // Convert to 0-based indexing
        int result = vec[idx % n];  // Use modular arithmetic to find value
        cout << result << endl;  // Output the result
    }
    return 0;
}
