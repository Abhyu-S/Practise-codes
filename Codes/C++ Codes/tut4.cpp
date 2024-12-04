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
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;

    return 0;
}