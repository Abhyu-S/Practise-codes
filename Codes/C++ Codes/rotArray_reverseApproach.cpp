#include <bits\stdc++.h>
using namespace std;

    
int gcd(int a, int b){
    if (b<=0) return a;
    return gcd(b, a%b);
}

void rotArray ( vector<int> &arr, int d){
    int n = arr.size();
    d = d%n;

    reverse(arr.begin(), arr.begin() + d);
    for(int x : arr){
        cout << x << ' ';
    }cout << endl;
    reverse(arr.begin() + d, arr.end());
    for(int x : arr){
        cout << x << ' ';
    }cout << endl;
    reverse(arr.begin(), arr.end());

}

int main() {
    vector<int> my = {1,2,3,4,5,6,7};
    rotArray(my, 3);
    for(int x : my){
        cout << x << ' ';
    }
    return 0;
}
