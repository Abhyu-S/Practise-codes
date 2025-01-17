#include <iostream>
using namespace std;

int main(){
    int arr[10]={-9,69,28,19,21,2,-3,61,-63,90}, small = arr[0],ind=0;
    for (int i=0; i<10; i++)
    {
        if (arr[i]<small){
            small=arr[i];
            ind=i;
        }
    }
    cout<<small<<' '<<ind;    
    return 0;
}