#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        int ctr1 = count(s.begin(), s.end(), '-');
        int ctr2 = count(s.begin(), s.end(), '_');

        if (ctr1 < 2 || ctr2 < 1) {
            cout << 0 << endl;
        } else {
            long long combinations = (1LL * ctr1 * (ctr1-1)/2) * ctr2;
            cout << combinations << endl;
        }
    }
    return 0;
}
