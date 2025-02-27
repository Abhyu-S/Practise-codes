//Data types, variable, scope of a variable
#include <iostream>
 using namespace std;


void sum(){
    int glo=5000;
    cout<<"\n"<<glo;
    }
 int main(){
    //integers can also be defined as
    // int a=5
    // int b=4
    int glo=4;
    glo=45;
    int a=5, b=4;
    float pi=3.14;
    char c = 'j';
    bool is_true = false;
    cout<<"The value of a is "<<a<<"\nThe Value of b is "<<b;
    cout<<"\nSum of a and b is "<<a+b;
    cout<<"\nThe value of pi is "<<pi;
    cout<<"\nThe character c is "<<c;
    sum();
    cout<<"\n"<<glo<<"\n"<< is_true;//precedence is given to local variable
    return 0;
    }