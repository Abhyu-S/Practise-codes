#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        vector<int> vec = {2,1};
        if(n==1) printf("%d\n",-1);
        else if(n==2){
            printf("%d %d\n",2,1);
        }
        else if((n==8) || (n==49) || (n==288) || (n==1681) || (n==9800) || (n==57121) || (n==332928) || (n==1940449)){
            printf("%d\n",-1);
        }
        else{
            for(int i=2; i<n; i++){
                if((i==7) || (i==48) || (i==287) || (i==1680) || (i==9799) || (i==57120) || (i==332927) || (i==1940448)){
                    vec.push_back(i+2);
                    vec.push_back(i+1);
                }
                else if((i==8) || (i==49) || (i==288) || (i==1681) || (i==9800) || (i==57121) || (i==332928) || (i==1940449)){
                    continue;
                }
                else{
                    vec.push_back(i+1);
                }
            }
            for(int i=0; i<n; i++){
                printf("%d ", vec[i]);
            }
            printf("\n");
        }
    }
    return 0;
}