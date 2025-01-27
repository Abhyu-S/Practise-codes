#include <iostream>
using namespace std;

int main(){
    int  n;
    cin>>n;
    int arr[n];
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int q;
    while(q--){
        int L,R;
        long long sum=0;
        cin>>L>>R;
        for(int i=L; i<=R; i++){
            sum+=arr[i];
        }
        cout<<sum;
    }
    return 0;
}