#include <bits\stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int b[n];
        b[0]=4;
        for(int i=1; i<(n-1); i++){
            cin >> b[i];
        }
        b[n-1]=4;
        int first1=1;
        for(int i=1; i<(n-1); i++){
            if(b[i]==1){
                first1=i;
                break;
            }
        }
        int flag=1;
        for(int i=first1; i<(n-1); i++){
            if(b[i]==0){
                if((b[i-1])&&(b[i+1]) == 1){
                    cout<<"NO";
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1){
            cout<<"YES";
        }
        cout<<endl;
    }
}