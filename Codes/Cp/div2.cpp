#include <bits\stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long int bx, ky, a;
        scanf("%d %d %d", &bx, &ky, &a);
        long long int i = 1;
        int flag = 1;
        while(a>(-1)){
            if(i%2!=0){
                a-=bx;
                flag=1;
                i++;
            }
            else{
                a-=ky;
                flag=0;
                i++;
            }
        }
        if(flag){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}