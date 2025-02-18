#include <bits\stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int l,r;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    if((i-1)!=(j-1)){
                        l=i;r=j;
                    }
                }
            }
        }
        int ans_arr[n-(r-l)];
        for(int i=0; i<l; i++){
            ans_arr[i]=arr[i];
        }
        for(int i=l; i<n-(r-l); i++){
            ans_arr[i]=arr[i+r];
        }
        for(int i=0; i<n; i++){
            cout<<ans_arr[i];
        }
    }
    return 0;
}