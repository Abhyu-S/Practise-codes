#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        unsigned long long l, r;
        scanf("%d %d %d", &n, &l, &r);
        vector<int>vec;
        for(int i=0; i<n; i++){
            int k;
            scanf("%d", &k);
            vec.push_back(k);
        }
        for(int i=n; i<r; i++){
            int a = 0;
            for(int j=0; j<=(i/2); j++){
                a=a^vec[i];
            }
            vec.push_back(a);
        }
        printf("%d\n", vec[l]);
    }
    return 0;
}