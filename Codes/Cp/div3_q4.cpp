#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        if(m%2==0){
            int easy = (m/2)*n;
            int tough = ((m/2)-1)*(n/2);
            cout << easy + tough << endl;
        }
        else{ 
            int easy = ((m/2)+1)*n;
            int tough = (n/2);
            cout << easy + tough << endl;
        }
        
    }
    return 0;
}