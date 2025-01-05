#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rev_no=0;
        while(n>0){
            int temp = n%10;
            rev_no = rev_no*10 + temp;
            n/=10;
        }
        cout<<rev_no<<endl;
    }
    return 0;
}