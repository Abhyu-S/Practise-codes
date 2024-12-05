#include <iostream>
#include <iomanip> // involves setw (field width set krne ki allowance hoti hai)
using namespace std;

int main(){
    // ********Constants in cpp**********
    // int a=34;
    // cout<<"The value of a was: "<<a;
    // a=45;
    // cout<<"The value of a now is: "<<a;
    // const int b=100;
    // b=13; ham aise change nhi kr sakte coz upar constant likh diye hai
    
    //**********manipulators in cpp**********
    //endl is an example
    // int a=1,b=23,c=234,d=4567;
    // cout<<"The value of a is: "<<a<<endl;
    // cout<<"The value of b is: "<<b<<endl;
    // cout<<"The value of c is: "<<c<<endl;
    // cout<<"The value of d is: "<<d<<endl;

    // cout<<"The value of a with setw is: "<<setw(4)<<a<<endl;
    // cout<<"The value of b with setw is: "<<setw(4)<<b<<endl;
    // cout<<"The value of c with setw is: "<<setw(4)<<c<<endl;
    // cout<<"The value of d with setw is: "<<setw(4)<<d<<endl;

    //*********Operator precedence************
    //for information about precedence and associativity go to cppreference.com 

    int a=5, b=20;
    int c = a*b+30-10/5;
    //c= (((a*b)+30)-(10/5))
    cout<<c;
    return 0;
}
