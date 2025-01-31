#include <stdio.h>
#include <string.h>

int main() 
{
    char name[20];
    printf("Enter your name : ");
    scanf("%[^\n]%*c",name);
    for(int i=0; i<strlen(name); i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(j==i)
            {
                printf("%c",name[j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}