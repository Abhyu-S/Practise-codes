#include <bits\stdc++.h>
using namespace std;

int main(){
    string str;
    getline(cin , str);
    string sol_str;
    int len = str.size();
    while (len-->-1)
    {
        sol_str += str[len];
    }
    cout << sol_str;
    return 0;
}