#include <bits\stdc++.h>
using namespace std;

int main(){
    while(cin){
        string s;
        cin>>s;
        for (int i=0;i<s.length(); i++){
            cout<<char(toupper(s[i]));
        }
        cout<<endl;
    }
    return 0;
}