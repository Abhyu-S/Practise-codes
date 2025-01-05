#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Give range"<<endl;
    cin>>a>>b;
    string numbers[9]={"one","two","three","four","five","six","seven","eight","nine"};
    for (int i=a; i<=b; i++){
        if(i>9){
            if(i%2 == 0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
        else{
            cout<<numbers[i-1]<<endl;
        }
    }
    return 0;
}