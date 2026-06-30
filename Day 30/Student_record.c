#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    char course[30];
};

int main() {
    struct Student s[100];
    int n = 0, choice, i, roll, found;

    do {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Roll Number: ");
                scanf("%d", &s[n].roll);

                printf("Enter Student Name: ");
                scanf("%s", s[n].name);

                printf("Enter Course: ");
                scanf("%s", s[n].course);

                n++;
                printf("Student Record Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Student Records Found!\n");
                } else {
                    printf("\nRoll\tName\tCourse\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\n",
                               s[i].roll,
                               s[i].name,
                               s[i].course);
                    }
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &roll);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(s[i].roll == roll) {
                        printf("\nStudent Found\n");
                        printf("Roll Number : %d\n", s[i].roll);
                        printf("Name        : %s\n", s[i].name);
                        printf("Course      : %s\n", s[i].course);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Record Not Found!\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}