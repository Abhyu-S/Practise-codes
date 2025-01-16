#include <iostream>
#include <string>
using namespace std;

int main(void){
    string str;
    // cin.ignore();
    int i=0;
    do{
    getline(cin, str);
    cout<<str<<endl;
    i++;
    }while(i<2);
}