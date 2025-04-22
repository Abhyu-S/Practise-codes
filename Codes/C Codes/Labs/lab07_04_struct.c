#include <stdio.h>

struct Student
{
    int rollNo;
    char name[20];
    float marks;
};


int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d", &n);
    while(n){
        struct Student s[n];
        for(int i=0; i<n; i++){
            printf("\nEnter Roll number : ");
            scanf("%d", &s[i].rollNo);
            printf("\nEnter the Name : ");
            scanf("%s", &s[i].name);
            printf("\nEnter marks : ");
            scanf("%f", &s[i].marks);
        }
        printf("\nThe details of students who weren't average : \n");
        printf("Roll number\tName\tMarks\n");
        for(int i=0; i<n; i++){
            if(s[i].marks>75 || s[i].marks<30){
                printf("%d\t\t%s\t%3.2f\n", s[i].rollNo, s[i].name, s[i].marks);
            }
        }
    }
    
    return 0;
}