#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number whose multiplication table you want"<<endl;
    cin>>num;
    cout<<endl;
    int i=1;
    if (num>0){
    do{
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }while(i<11);
    }
    else{
        cout<<"Enter a Natural number";
    }
    return 0;
}