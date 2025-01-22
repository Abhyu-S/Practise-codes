#include <bits\stdc++.h>
using namespace std;

int main(){
    int N = 1e4+2;
    string s;
    //getline(cin,s);
    while(true){
        cin>>s;
        for(int i=0; i<N; i++)
        {
            s[i]-=32;
            
        }
        cout<<s<<endl;
    }
    
    return 0;
}