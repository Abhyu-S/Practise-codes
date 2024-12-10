#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number whose multiplication table you want"<<endl;
    cin>>num;
    int i=1;
    do{
        cout<<num*i<<endl;
        i++;
    }while(i<11);

    return 0;
}