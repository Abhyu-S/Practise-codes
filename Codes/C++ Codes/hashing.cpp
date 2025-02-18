#include<iostream>
using namespace std;

const int N = 1e7;
int ctrarr[N]; //global arrays 0 inititalised hote hai

int main(void){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        ctrarr[a[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int x;
        cin >> x;
        cout<< ctrarr[x] << endl;
    }
}