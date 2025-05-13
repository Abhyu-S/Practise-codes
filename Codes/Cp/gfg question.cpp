#include <bits\stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int hsh[N];
int main(){
    int flag = 1;
    vector<int> findMissing(vector<int> a, vector<int> b){
        vector<int> sol;
        for(int i = 0; i< a.length(); i++){
            hsh[a[i]]++;
        }
        for(int i = 0; i< b.length(); i++){
            if(hsh[b[i]] == 1) sol.push_back(b[i]);
        }
    }
    return 0;
}//GeeksforGeeks question