//Arrays in cpp
#include <iostream>
using namespace std;

int main(){
    int marks[] = {23, 45, 5, 89};// [] ke andar number likh bhi sakte ho aur nhi bhi
    int mathmarks[6];//Name of array itself is the address of first block of array therefore writing &marks is wrong
    mathmarks[0] = 34;
    mathmarks[1] = 67;
    mathmarks[2] = 02;
    mathmarks[3] = 56;
    mathmarks[5] = 40;

    int* p = marks;
    
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    
    int i=0;
    for(int i=0; i<5; i++){

        cout<<"The value of marks["<<i<<"] is : "<<*(p+i)<<endl;
    }
    // cout<<mathmarks[4];
    // cout<<mathmarks<<endl;

    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i=0; i < 6; i++)
    // {
    //     cout<< mathmarks[i]<<endl;
    // }
    
    // int j=0;
    // while(j<6){
    //     cout<< mathmarks[j]<<endl;
    //     j++;
    // }
    
    // int m=0;
    // do{
    //     cout<<mathmarks[m]<<endl;
    //     m++;
    // }while (m<6);
    
    return 0;
}