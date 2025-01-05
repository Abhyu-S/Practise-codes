#include <iostream>
using namespace std;

int main(){
    int t;
    cout<<"Type in the number of test cases : ";
    cin>>t;
    while(t--){
            int n;
            cout<<"Type in the number : ";
            cin>>n;
            int s=0;
            while(n>0){
                int last_digit = n%10;
                s=s+last_digit;
                n=n/10;
            }
            cout<<"The sum of its digits is : "<<s<<endl;
    }
    
    
    return 0;
}