#include <bits\stdc++.h>

using namespace std;

int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd ( b , a%b );
}
int main(void){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int a[n+10];
        int fwd_hsh[n+10],bkwd_hsh[n+10];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        fwd_hsh[0]=0;
        bkwd_hsh[n+1]=0;
        for(int i=1; i<=n; i++){
            fwd_hsh[i]=gcd(fwd_hsh[i-1],a[i]);
        }
        for(int i=n; i>=1; i--){
            bkwd_hsh[i]=gcd(bkwd_hsh[i+1],a[i]);
        }
        while(q--){
            int L, R;
            cin >> L >> R;
            cout << gcd(fwd_hsh[L-1], bkwd_hsh[n-R]) << endl;
        }
    }
}