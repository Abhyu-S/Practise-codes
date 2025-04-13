#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t; // Number of test cases
    while (t--) {
        int n;
        cin >> n; // Size of array
        vector<int> arr(n);

        // Required digits and their counts to form "01.03.2025"
        int required[10] = {3, 1, 2, 1, 0, 1, 0, 0, 0, 0}; // Index represents digit (0-9)
        int found[10] = {0}; // To track counts of digits found so far

        int minDigits = -1; // To store minimum number of digits needed

        for (int i = 0; i < n; i++) {
            cin >> arr[i]; // Input array elements

            // Count occurrences of required digits
            if (arr[i] >= 0 && arr[i] <= 9) {
                found[arr[i]]++;
            }

            // Check if all required digits are satisfied
            bool canFormDate = true;
            for (int j = 0; j < 10; j++) {
                if (found[j] < required[j]) {
                    canFormDate = false;
                    break;
                }
            }

            if (canFormDate) {
                minDigits = i + 1; // Store minimum digits needed
                break; // Exit loop early since condition is satisfied
            }
        }

        // Output result for this test case
        if (minDigits != -1) {
            cout << minDigits << endl; // Minimum digits needed
        } else {
            cout << "Impossible" << endl; // Cannot form date
        }
    }
    return 0;
}
