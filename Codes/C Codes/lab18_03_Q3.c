#include<stdio.h>
#include<string.h>

int main(){
    char s[100];
    
    scanf("%s", &s);

    for(int i = 0; i < strlen(s); i++){
        if(s[i]!=s[i+1]){
            if(s[i+1]!=s[i+2]){
                printf("The character occuring once is : %c",s[i+1]);
                break;
            }
            else{
                continue;
            }
        }
    }
    
    return 0;
}