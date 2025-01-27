#include <iostream>
using namespace std;

int main(void){
    int matrix1[2][2];
    int matrix2[2][2];
    int res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2; j++){
            matrix1[i][j] = j+4;
            matrix2[i][j] = j+1;
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2; j++){
            for(int m=0; m<2; m++){
                res[i][j] += matrix1[j][m] * matrix2[m][j];
            }
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }
}