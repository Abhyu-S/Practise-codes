// #include <stdio.h>
// #include <string.h>

// int mysub_str(char a[], int na, char b[], int nb){
//     int a_index = -1;
//     for(int i=0; i<na; i++){
//         if(a[i] == b[0]){
//             a_index = i;
//         }
//     }

//     if(a_index == -1)return 0;
    
//     int flag = 1;
//     for(int i=a_index; i<(a_index+nb); i++){
//         if(a[i] != b[i-a_index]){
//             flag=0;
//             break;
//         }
//     }
//     return flag;
// }

// int main(){
//     char str1[10] = "helllllllo", str2[5] = "ll";
//     int res = mysub_str(str1, strlen(str1) , str2, strlen(str2));
//     printf("%s", (res!=0) ? "Yes" : "No");
//     return 0;
// }

#include <stdio.h>
#include <string.h>

// Function to check if str2 is a substring of str1
int isSubstring(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len2 == 0) return 1; // An empty string is always a substring
    if (len2 > len1) return 0; // If str2 is longer, it can't be a substring
    
    for (int i = 0; i <= len1 - len2; i++) {
        int j;
        for (j = 0; j < len2; j++) {
            if (str1[i + j] != str2[j]) {
                break;
            }
        }
        if (j == len2) {
            return 1; // Found substring
        }
    }
    return 0; // Not found
}

int main() {
    const char *str1 = "aaabbfffffffccasd";
    const char *str2 = "ff";
    
    if (isSubstring(str1, str2)) {
        printf("'%s' is a substring of '%s'\n", str2, str1);
    } else {
        printf("'%s' is NOT a substring of '%s'\n", str2, str1);
    }
    
    return 0;
}