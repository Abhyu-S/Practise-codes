#include <bits\stdc++.h>
using namespace std;

string operate(string s){
    int flag_i, flag_e;
    if(s.size()==1){
        if(s[0] == '1'){
            s[0] = '0';
        }
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i]=='1'){
                flag_i = i;
                break;
            }
        }
        for(int i=0; i<s.size(); i++){
            if(i == flag_i){
                continue;
            }
            else if(s[i] == '1'){
                flag_e = i;
                break;
            }
        }
        for(int i=flag_i; i<(flag_e+1); i++){
            if(s[i] =='1'){
                s[i] = '0';
            }
            else{
                s[i] = '1';
            }
        }
    }
    return s;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int rtc=0;
        string s;
        cin>>s;
        for(int j=0; j<s.size(); j++){
            if(s[j] == '1'){
                s = operate(s);
                rtc++;
            }
        }
        cout<<rtc<<endl;
    }
    return 0;
}

//bkl ye submit ho gya!!
// #include <bits\stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int rtc=0;
//         string s;
//         cin>>s;
//         for(int j=0; j<s.size(); j++){
//             if(s[j] == '1'){
//                 s[j] = '0';
//                 rtc++;
//             }
//         }
//         cout<<rtc<<endl;
//     }
//     return 0;
// }