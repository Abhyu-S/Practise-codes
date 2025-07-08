#include <bits\stdc++.h>
using namespace std;

    
int gcd(int a, int b){
    if (b<=0) return a;
    return gcd(b, a%b);
}

void rotArray (vector<int> &arr, int d){
    int n = arr.size();
    d = d%n;
    int req = gcd(d,n);
    for (int i=0; i<req; i++){
        int temp = arr[i];
        int j = i;
        while(true){
            int k = j + d;
            if (k>=n) k = k-n;
            if (k==i) break;
            arr[j] = arr[k];
            j=k;
        }
        arr[j] = temp;
    }
    cout << "Pass complete" << endl;
}


int main() {
    vector<int> my = {1,2,3,4,5,6,7};
    rotArray(my, 3);
    for(int x : my){
        cout << x << ' ';
    }
    return 0;
}
