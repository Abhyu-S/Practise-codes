#include <iostream>
using namespace std;

int main(){
    int array[5] = {5,4,3,2,1};
    int temp;
    int k=0;
    int min=array[0];
    for(int j=0; j<5; j++){
        for(int m=k; m<5; m++){
            if(min>array[m]){
                temp=array[j];
                array[j]=array[m];
                array[m]=temp;
                min=array[k+1];
                
            }
        }k++;
        
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<' ';
    }
    
    return 0;
}