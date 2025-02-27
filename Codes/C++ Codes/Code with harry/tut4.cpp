//There are two type of header files
//1. System header files. (It comes with the compiler)
#include <iostream>
//2. User defined header files. written by the programmer
//#include <this.h> (This will throw an error if this.h is not included in the present directory)

using namespace std;

int main(){
    int a=10,b=20;
    cout<<"Hello world"<<endl;
    //Arithmatic operators
    cout<<"Following are the arithmatic operators"<<endl;
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;//a=4
    cout<<"The value of a++ is: "<<a++<<endl;//due to ++ which is after a, pehle print hua fir increament hua
    cout<<"The value of a-- is: "<<a--<<endl;//now a=5, to 5 print hoke decreament hua 
    cout<<"The value of ++a is: "<<++a<<endl;//a=4 tha from previous line, but yaha ++ pehle hai to pehle increase hogi value then print hogi
    cout<<"The value of --a is: "<<--a<<endl;//same goes pehle decrease hogi then print hogi
    cout<<endl;

    //Assignment operators --> used to assign values to variables
    //int a=7,b=90;
    char c ='v';

    //comparision operator
    cout<<"Following are the comparision operators"<<endl;
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<endl;

    //Logical operators (Bhai of camparision) chizo ko paranthesis me close karna is always a good practise
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical 'and' opoerator ((a==b) && (a<b)) is: "<<((a==b) && (a<b))<<endl;//and operator
    cout<<"The value of this logical 'or' opoerator ((a==b) || (a<b)) is: "<<((a==b) || (a<b))<<endl;//or operator
    cout<<"The value of this logical 'not' opoerator (!(a==b)) is: "<<(!(a==b))<<endl;//not operator

    return 0;
}