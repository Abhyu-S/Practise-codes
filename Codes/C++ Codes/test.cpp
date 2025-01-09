#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> list(n);
    for (int i = 0; i < n; ++i) {
        cin >> list[i];
    }

    vector<int> output;
    int start = 0, end = n - 1;

    while (start <= end) {
        if (list[start] > list[end]) {
            output.push_back(1);
            --end;
        } else if (list[start] < list[end]) {
            output.push_back(2);
            ++start;
        } else {
            output.push_back(0);
            ++start;
            --end;
        }
    }

    for (int i = 0; i < output.size(); ++i) {
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}
