#include <iostream>
#include <vector>
using namespace std;

// Function to compute XOR sum up to index i
int computeXOR(int i, const vector<int>& vec, int n) {
    if (i < n) {
        return vec[i]; // If within initial range, return directly
    }
    int cycle_length = n; // Length of repeating cycle
    return vec[i % cycle_length]; // Use modular arithmetic to find value
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long l, r;
        cin >> n >> l >> r;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

        // Compute sum in range [l, r]
        long long sum = 0;
        for (long long i = l - 1; i <= r - 1; i++) { // Convert to 0-based indexing
            sum += computeXOR(i, vec, n);
        }
        cout << sum << endl;
    }
    return 0;
}
