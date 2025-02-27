#include <iostream>
using namespace std;

int main(){
    /* Loops in C++:
    There are three types of loops in C++:
    1. For loop
    2. While loop
    3. do-While loop
    */

   /*For loop in C++*/
    // int i=1;
    // cout<<i;
    // i++

    //Syntax for for loop
    //for(initialization; condition; updation)
    // {
    //     loop body(C++ code);
    // }
    
    // for (int i = 1; i < 101; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     // yaha i++ likhoge to overall 2 bar update ho jayega
    // }
    
    //example of an infinite loop
    // for (int i=1; 34 <=40; i++)
    // {
    //     cout<<i<<endl;
    // }

    //syntax of while loop;
    // while(condition){
    //     c++ statements
    // }

    //Printing 1 to 40 using while loop
    // int i=1;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }

    //Infinite while loop
    // int i=1;
    // while(true){
    //     cout<<i<<endl;
    //     i++;
    // }

    //do-while loop in c++
    // syntax;
    // do{
    //     c+= statements;
    // }while(i<41);

    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=40);//difference is, loop ek bar chalge hi even though while(false) likh de

    return 0;
}