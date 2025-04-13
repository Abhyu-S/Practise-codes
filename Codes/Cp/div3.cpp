#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        
        int zero = 0, one = 0, two = 0, three = 0, five = 0;
        int minDigits = -1;
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {         
            switch (arr[i]) {
                case 0: zero++; break;
                case 1: one++; break;
                case 2: two++; break;
                case 3: three++; break;
                case 5: five++; break;
            }
            
            if (zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1) {
                minDigits = i + 1;
                break;
            }
        }

        if (minDigits != -1) {
            cout << minDigits << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
