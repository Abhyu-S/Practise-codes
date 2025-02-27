#include <bits\stdc++.h>

using namespace std;


int main(void){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int flag=1;
        for(int i=0; i<s.length(); i++){
            for(int j=(i+1); j<(s.length()+1); j++){
                flag=1;
                if(s[i]==s[j]){
                    cout<< "Yes" << endl;
                    goto check;
                }
                else{
                    flag=0;
                }
            }
        }
        check:
        if(flag==0){
            cout << "No" << endl;
        }
    }
}