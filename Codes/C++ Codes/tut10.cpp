#include <iostream>
using namespace std;

int main(){
    //What is a pointer?
    //A data type which holds the address of other data types

    int a=3;
    int* b = &a; // int* aisa variable jo integer ko point krta ho
    // & --> (Address of) operator. &a means address of a
    cout<<"Address of a with b is "<<b<<endl;
    cout<<"Address of a is "<<&a<<endl;

    // * --> Dereference operator
    cout<<"The value at address b is "<<*b<<endl;

    return 0;
}