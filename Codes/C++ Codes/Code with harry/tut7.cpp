//Control structures
// basic Structures
// 1. Sequence structure
// 2. Selection  structure
// 3. Loop structure
#include<iostream>
using namespace std;

int main(){
     int age;
     cout<<"Tell me your age"<<endl;
     cin>>age;
    // if((age<18) && (age>0)){
    //     cout<<"You are not invited to my party";
    // }
    // else if(age<1){
    //     cout<<"You are not born yet";
    // }
    // else if(age==18){
    //     cout<<"You are a kid, you will be provided with kid pass";
    // }
    // else{
    //     cout<<"You are invited to my party";
    // }

    //Selection control structure: switch case statements
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;// If break nhi likhenge to jis case me honge us case ke niche wali sari statements print ho jayengi
    case 2:
        cout<<"You are 2"<<endl;
        break;// If break nhi likhenge to jis case me honge us case ke niche wali sari statements print ho jayengi
    case 22:
        cout<<"You are 22"<<endl<<endl;
        break;// If break nhi likhenge to jis case me honge us case ke niche wali sari statements print ho jayengi
    default:
        cout<<"No special cases"<<endl;
        break;// If break nhi likhenge to jis case me honge us case ke niche wali sari statements print ho jayengi
    }
    cout<<"done with switch case"<<endl;
    return 0;   
}