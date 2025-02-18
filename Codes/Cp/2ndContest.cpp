#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  // Number of test cases
    while (t--) {
        string s, t;
        int n;
        cin >> n;
        cin >> s;
        int ctr = 0;

        while (true) {
            size_t pos_s = s.find('1');
            if (pos_s != string::npos) {
                ctr++;
                t += s.substr(pos_s);
                s.erase(pos_s);
                continue;
            }

            size_t pos_t = t.find('0');
            if (pos_t != string::npos) {
                ctr++;
                s += t.substr(pos_t);
                t.erase(pos_t);
                continue;
            }
            break;
        }
        cout << ctr << endl;
    }
    return 0;
}