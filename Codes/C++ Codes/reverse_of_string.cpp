#include <bits\stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);
    string sol_str;
    int len = str.size();
    for (int i = 0; i<len; i++){
        sol_str+=str[len-1-i];
    }
    cout << sol_str<<endl;

    if (str==sol_str){
        cout<<"Palindrome";
    }
    else{
        cout << "Not palindrome";
    }
    return 0;
}