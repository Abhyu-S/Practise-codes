#include<iostream>
#include<math.h>
using namespace std;

int main(void){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    for (int i=1; i<2*n; i++){
        for( int j=1; j<2*n; j++){
            int element = n-min(min(i,j),min(2*n-i,2*n-j))+1;
            cout<<element<<" ";
        }
        cout<<endl;
    }
}