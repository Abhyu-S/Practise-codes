#include <bits\stdc++.h>
using namespace std;

int main(){
    int n, mul_4=0, mul_3=0, mul_1=0;
    cin>>n;
    if(n%4 == 1){
        mul_4 = n/4;
        mul_1 = 1;
        cout<<"Number of 4rs. coin(s) : "<<mul_4<<" and 1 more coin of 1rs."<<endl<<"OR";
        cout<<"Number of 4rs. coin(s) : "<<mul_4-2<<" and 3 more coin of 3rs."<<endl;
    }
    else if(n%4 == 3){
        mul_4 = n/4;
        mul_3 = 1;
        cout<<"Number of 4rs. coin(s) : "<<mul_4<<" and 1 more coin of 3rs."<<endl;
    }
    else if(n%4 ==2){
        mul_4 = (n/4)-1;
        cout<<"Number of 4rs. coin(s) : "<<mul_4<<" and 2 more coins of 3rs."<<endl;
    }
    else{
        mul_4 = n/4;
        cout<<"Number of 4rs. coin(s) : "<<mul_4<<endl;
    }
    return 0;
}