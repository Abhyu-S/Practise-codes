#include <iostream>
using namespace std;

int main(){
    // for (int i = 0; i < 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    //     if (i==2){
    //         break;//wahi ke wahi exit krwa dega loop se agar cout break krne ke bad likhu to 1 tak print hoga only
    //     }
    // }
    
    for (int i = 0; i < 6; i++)
    {
        if (i==2){
            continue;//for only that iteration continue ke niche likhe hue sare statements mat run karo and go to next iteration
        }
        cout<<i<<endl;
    }
    return 0;
}