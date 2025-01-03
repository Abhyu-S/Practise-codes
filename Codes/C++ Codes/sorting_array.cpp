#include <iostream>
using namespace std;

int main(){
    int array[5]={4,9,1,8,3};
    int temp;
    int k;
    for(int j=0; j<5; j++){
        int min = array[j];
        k = j;
        for(int m=j+1; m<5; m++){
            if(min>array[m]){
                min=array[m];
                k=m;
            }
        }
        temp=array[j];
        array[j]=array[k];
        array[k]=temp;
    }
    for (int i = 0; i < 5; i++)
    {
        cout<<array[i]<<' ';
    }
    return 0;
}
