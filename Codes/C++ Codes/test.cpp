#include <bits\stdc++.h>

using namespace std;


int main(void){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        string half1, half2;
        for(int i=0; i<(s.length()/2); i++){
            half1+=s[i];
        }
        for(int i=(s.length()/2); i<s.length(); i++){
            half2+=s[i];
        }
        for(int i=0; i<(s.length()/2); i++){
            if(half1[i] != half2[i]){
                
            }
        }
        if(half1 == half2){
            cout << "Yes" << endl;
        }
        else{
            cout << "No";
        }
    }
}