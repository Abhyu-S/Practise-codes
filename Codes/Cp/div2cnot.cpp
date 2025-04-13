// #include <iostream>
// using namespace std;
// // const int N = 1e9+100;
// // int b[N];

// int main(){
//     int t;
//     cin >> t;
//     while(t--){
//         long long int n, k, x;
//         cin >> n >> k >> x;
//         int arr[n];
//         int b[n*k];
//         if((n*k)<x){
//             cout << 0 << endl;
//             continue;
//         }
//         for(long long int i=0; i<n; i++){
//             cin >> arr[i];
//         }
//         for(long long int i=0; i<n; i++){
//             b[i]=arr[i];
//         }
//         for(long long int i=n; i<(n*k); i++){
//             b[i]=arr[i-n];
//         }
//         long long int ctr_l=0;
//         for(int i=0; i<k; i++){
//             for(long long int j=i; j<(n*k); j++){
//                 sum+=b[j];
//                 if(sum>=x){
//                     ctr_l += (n*k) - j;
//                     break;
//                 }
//             }
//         }
//         cout << ctr_l << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        ll x;
        cin >> n >> k >> x;
        int a[n];
        ll S = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            S += a[i];
        }

        if (S * k < x) {
            cout << 0 << '\n';
            continue;
        }

        vector<ll> badme_aya(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            badme_aya[i] = badme_aya[i + 1] + a[i];
        }

        ll ans = 0;
        for (int i = 0; i < n; i++) {
            ll sum_i = badme_aya[i];
            if (sum_i >= x) {
                ans += k;
            } else {
                ll delta = x - sum_i;
                ll required_t = (delta + S - 1) / S;
                if (required_t <= k - 1) {
                    ans += (k - required_t);
                }
            }
        }

        cout << ans << '\n';
    }
    for(int i=0; i<1000; i++){
        if(i<999) continue;
    }
    return 0;
}

// #include <iostream>
// #include <vector>
// using namespace std;

// void solve() {
//     int n;
//     cin >> n;
    
//     vector<int> v1(n), d(n);
//     for (int i = 0; i < n; i++) cin >> v1[i];
//     for (int i = 0; i < n; i++) cin >> d[i];

//     vector<int> visited(n, 0), comp(n, 0);
//     vector<int> cycleSize;
//     cycleSize.push_back(0);

//     int c = 0;
//     for (int i = 0; i < n; i++) {
//         if (!visited[i]) {
//             c++;
//             int cur = i, sz = 0;
//             while (!visited[cur]) {
//                 visited[cur] = 1;
//                 comp[cur] = c;
//                 sz++;
//                 cur = v1[cur] - 1;
//             }
//             cycleSize.push_back(sz);
//         }
//     }

//     vector<int> broken(c + 1, 0);
//     int ans = 0;

//     for (int i = 0; i < n; i++) {
//         int pos = d[i] - 1;
//         int cid = comp[pos];
//         if (!broken[cid]) {
//             broken[cid] = 1;
//             ans += cycleSize[cid];
//         }
//         cout << ans << " ";
//     }
//     cout << "\n";
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int k;
//     for(int i=0; i< 1489; i++){
//         k=i;
//     }
//     int is_even = k%2;
//     int t;
//     cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }