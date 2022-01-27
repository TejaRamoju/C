#include <stdio.h>
struct employee {
    char firstName[50];
    int emp_id;
    char rating[5];
} s[5];

int main() {
    int i;
    printf("Enter information of employees:\n");

    // storing information
    for (i = 0; i <= 5; i++) {
        s[i].emp_id = i + 1;
        printf("\nEnter Employee id number %d \n", s[i].emp_id);
        scanf("\n%d",&s[i].emp_id);
        printf("\nEnter first name: ");
        scanf("%s", s[i].firstName);
        printf("\nEnter Employee Rating: ");
        scanf("%s", &s[i].rating);
    }
    printf("Displaying Information:\n\n");

    for (i = 0; i <= 5; i++) {
        printf("\nEmployee Id: %d\n", i + 1);
        printf("First name: \n");
        puts(s[i].firstName);
        printf("Rating: %s\n", s[i].rating);
        puts(s[i].rating);
        printf("\n");
    }
    return 0;

}
