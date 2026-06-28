#include <stdio.h>
#include <string.h>

struct Contact {
    int id;
    char name[50];
    char phone[15];
};

int main() {
    struct Contact c[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Contact ID: ");
                scanf("%d", &c[n].id);

                printf("Enter Name: ");
                scanf("%s", c[n].name);

                printf("Enter Phone Number: ");
                scanf("%s", c[n].phone);

                n++;
                printf("Contact Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Contacts Found!\n");
                } else {
                    printf("\n-------------------------------------\n");
                    printf("ID\tName\tPhone Number\n");
                    printf("-------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\n",
                               c[i].id,
                               c[i].name,
                               c[i].phone);
                    }
                }
                break;

            case 3:
                printf("Enter Contact ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(c[i].id == id) {
                        printf("\nContact Found\n");
                        printf("ID    : %d\n", c[i].id);
                        printf("Name  : %s\n", c[i].name);
                        printf("Phone : %s\n", c[i].phone);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");

                break;

            case 4:
                printf("Enter Contact ID to Delete: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(c[i].id == id) {

                        int j;
                        for(j = i; j < n - 1; j++) {
                            c[j] = c[j + 1];
                        }

                        n--;
                        found = 1;

                        printf("Contact Deleted Successfully!\n");
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");

                break;

            case 5:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}