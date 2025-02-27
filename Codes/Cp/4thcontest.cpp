#include <bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        int ctr1=0, ctr2=0;

        for(int i=0; i<n; i++){
            if(s[i] == '-') ctr1++;
            else ctr2++;
        }
        if(ctr2>=ctr1){
            ctr2 = ctr1 - 1;
        }

        

    }
    return 0;
}