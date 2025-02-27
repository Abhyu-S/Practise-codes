#include <iostream>
using namespace std;

int c=45;

int main(){
    //***********Built in data types ****************
    // int a,b,c;
    // cout<<"Enter the value of a: ";
    // cin>>a;
    // cout<<"Enter the value of b: ";
    // cin>>b;
    // c=a+b;
    // cout<<"The local c is: "<<c<<endl;
    // cout<<"The global c is: "<<::c;//scope resolution operator

    //***********float, double and long double literals*************

    float d=34.4f;//for float
    long double e=34.4l;// 'L' case sensitive nhi hai likha hai small wala for long double
    //34.4 //only if number is written like this then it is considered to be double by c++ compiler
    //34.4f //aisa likhne se ise vo float samjhega

    // cout<<"The size of d without any f or l is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of d f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of d F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of d l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of d L is: "<<sizeof(34.4L)<<endl;

    // cout<<"The value of d is "<<d<<endl;
    // cout<<"The value of e is "<<e<<endl;
    // is concept ka kam function overloading me use hoga
    
    //*********Referemce variables **********
    //Rohan das ---> Monty ----> Rohu ----> Dangerous coder
    // float x=455;
    // float & y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;
    
    //**********Typecasting***********

    int a=45;
    float b = 32.82;
    cout<<"The value of float a is: "<<float(a)<<endl;
    cout<<"The value of float a is: "<<(float)a<<endl;
    cout<<"The value of float b is: "<<int(b)<<endl;
    cout<<"The value of float b is: "<<(int)b<<endl;
    cout<<"The value of expression is: "<<a+b<<endl;
    cout<<"The value of expression is: "<<a+int(b)<<endl;
    
    return 0;
}