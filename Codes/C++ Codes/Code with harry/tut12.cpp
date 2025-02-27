#include <iostream>
using namespace std;

//User defined data type which consists of different other data types
    struct employee{        //typedef struct employee agar likha hota to go to 11th line
        /*data*/
        int eId;
        char favChar;
        float salary;

    }; //semi-colon ke pehle ep; ya kuch aur alias laga sakta hu from 5th line

union money //used for memory management
{
    /* at a time only one of these will be stored or used */
    int rice; 
    char car;
    float pounds;
};



int main(){

    enum Meal { breakfast, lunch, dinner }; //Meal is now my data type
    // cout<<breakfast<<endl; //prints indices
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    Meal m1 = lunch;

    cout<<(m1==2); //true or false check krta prints 1 for true, 0 for false

    // struct employee abhyudaya; // then mujhe yaha strcut employee ki jagah only ep likhne ki jarurat hogi
    // struct employee gullu;
    
    // union money m1;
    // m1.rice = 25;
    // m1.car = 'a';
    // cout<<m1.rice<<endl;// yaha a ki ASCII value 25 pe overwrite ho gyi
    
    // abhyudaya.eId = 1;
    // abhyudaya.favChar  = 'A';
    // abhyudaya.salary = 24065008;
    // gullu.eId = 2;
    // gullu.favChar = 'B';
    // gullu.salary = 12628699;
    // cout<<"Employee ID of Abhyudaya is : "<<abhyudaya.eId<<endl;    
    // cout<<"Employee ID of Gullu is : "<<gullu.eId<<endl;    
    // cout<<"Favourite Character of Abhyudaya is : "<<abhyudaya.favChar<<endl;    
    // cout<<"Favourite Character of Gullu is : "<<gullu.favChar<<endl;    
    
    return 0;
}