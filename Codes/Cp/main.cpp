#include <bits\stdc++.h>
using namespace std;

const int N = 1e6+10;
int hsh[N];


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int req;
        (n%2==0)? req = n/2: req = n/2 +1;
        for(int i=0; i<n; i++){
            hsh[abs(arr[i])]++;
        }
        arr[0];
    }
    return 0;
}