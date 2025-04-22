#include <stdio.h>
#include <string.h>

void findLargestWord(char str[]) {
    int maxLen = 0, wordLen = 0, start = 0, maxStart = 0;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            wordLen++;
        } else {
            if (wordLen > maxLen) {
                maxLen = wordLen;
                maxStart = start;
            }
            wordLen = 0;
            start = i + 1;
        }
        i++;
    }

    if (wordLen > maxLen) {
        maxLen = wordLen;
        maxStart = start;
    }

    printf("Largest word: ");
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[1000];

    fgets(str, sizeof(str), stdin);

    findLargestWord(str);

    return 0;
}
