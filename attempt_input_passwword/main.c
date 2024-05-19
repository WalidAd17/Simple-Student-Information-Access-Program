#include <stdio.h>
#include <string.h>

// Define the student password and information here
#define PASSWORD "232331012345"
#define FIRSTNAME "MonNom"
#define LASTNAME "MonPrenom"
#define BIRTHDAY "12/12/2005"
#define BAC_YEAR "2023"

void displayStudentInfo() {
    printf("---------------------------------\n");
    printf("First Name: %s\n", FIRSTNAME);
    printf("Last Name: %s\n", LASTNAME);
    printf("Birthday: %s\n", BIRTHDAY);
    printf("Baccalaureate Year: %s\n", BAC_YEAR);
    printf("---------------------------------\n");
}

int main() {
    char inputPassword[50];
    int attempts = 3;

    while (attempts > 0) {
        printf("Enter your password: ");
        scanf("%s", inputPassword);
        printf("\n");
        if (strcmp(inputPassword, PASSWORD) == 0) {
            printf("Access granted.\n\n");
            displayStudentInfo();
            return 0;
        } else {
            attempts--;
            printf("Incorrect password. You have %d attempt(s) left.\n\n", attempts);
        }
    }

    printf("Access denied. You have used all attempts.\n");
    return 1;
}
