#include <bits\stdc++.h>
using namespace std;

int fact(int &k){
    int fact=1;
    for(int i=1; i<=k; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            int m=i-j;
            arr[i][j]=fact(i)/(fact(j)*fact(m));
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}