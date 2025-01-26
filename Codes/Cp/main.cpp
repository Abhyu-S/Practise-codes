#include <bits\stdc++.h>
using namespace std;

const int N=2010, M = 2010;
int cards[N][M];
void sorting(int arr){

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>cards[i][j];
            }
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout<<cards[i][j]<<' ';
            }
            cout<<endl;
        }
    
    }
    return -1;
}