#include <stdio.h>

struct Book {
    int id;
    char name[50];
    char author[50];
    int issued;   // 0 = Available, 1 = Issued
};

int main() {
    struct Book book[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== Mini Library System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Name: ");
                scanf("%s", book[n].name);

                printf("Enter Author Name: ");
                scanf("%s", book[n].author);

                book[n].issued = 0;

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Books Available!\n");
                } else {
                    printf("\nID\tBook Name\tAuthor\t\tStatus\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t\t%s\t\t",
                               book[i].id,
                               book[i].name,
                               book[i].author);

                        if(book[i].issued == 0)
                            printf("Available\n");
                        else
                            printf("Issued\n");
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].id == id) {

                        printf("\nBook Found\n");
                        printf("Book ID : %d\n", book[i].id);
                        printf("Book Name : %s\n", book[i].name);
                        printf("Author : %s\n", book[i].author);

                        if(book[i].issued == 0)
                            printf("Status : Available\n");
                        else
                            printf("Status : Issued\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(book[i].id == id) {

                        if(book[i].issued == 0) {
                            book[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        } else {
                            printf("Book Already Issued!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");

                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}