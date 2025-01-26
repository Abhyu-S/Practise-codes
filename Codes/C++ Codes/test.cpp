#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int N;
        cin>>N;
        int i=0;
        long long int code=0;
        string ch;
        while(N--){
            cin>>ch[i];
            if(ch[i]=='1'){
                long long int temp=1;
                for(int j=0; j<(N-i); j++){
                    temp*=2;
                }
                code+=temp;
            }
            i++;
        }
        cout<<code<<endl;
    }    
    return 0;
}