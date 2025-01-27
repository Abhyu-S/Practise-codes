#include <bits\stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int clocks[n];
        for(int i=0; i<n; i++){
            cin>>clocks[i];
        }
        if(n%2==1){
            int l_sum=0,r_sum=0;
            for(int j=0; j<(n/2); j++){
                l_sum+=clocks[j];
                r_sum+=clocks[n-j];
            }
            if ((l_sum+r_sum)>clocks[(n/2)]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            int sum=0;
            for(int j=0; j<n; j++){
                sum+=clocks[j];
            }
            if(sum>(n*n)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }    
    return 0;
}