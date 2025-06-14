#include <bits\stdc++.h>

using namespace std;

void pushZerosToEnd(vector<int> &arr) {
        // code here
        
        for(int i=0; i<arr.size(); i++){
            
            if(arr[i]==0){
                
                if(arr[i+1]==0){
                    // check if its the end
                    int k;
                    int flag=1;
                    for(int j = i+1; j<arr.size(); j++){
                        if(arr[j] != 0){
                            k=j;
                            flag=0;
                            goto mid;
                        }
                    }
                    if(flag) return;
                    else{
                        mid:
                        arr.erase(arr.begin() + i, arr.begin() + k);
                        int cnt = k-i;
                        while(cnt--){
                            arr.push_back(0);
                        }
                    }

                }else{
                    arr.erase(arr.begin() + i);
                    arr.push_back(0);
                }
            }
        }
}

int main(){
    vector<int> arr = {3 , 5, 0, 0, 4};
    pushZerosToEnd(arr);
    for(int x : arr){
        cout << x << "\t";
    }
    return 0;
}