#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main() {
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    do {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Salary Details\n");
        printf("3. Search Employee\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Employee ID: ");
                scanf("%d", &emp[n].id);

                printf("Enter Employee Name: ");
                scanf("%s", emp[n].name);

                printf("Enter Basic Salary: ");
                scanf("%f", &emp[n].basic);

                // Salary Calculation
                emp[n].hra = 0.20 * emp[n].basic;   // 20% HRA
                emp[n].da  = 0.10 * emp[n].basic;   // 10% DA
                emp[n].gross = emp[n].basic + emp[n].hra + emp[n].da;

                n++;
                printf("Employee Added Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Employee Records Found!\n");
                } else {
                    printf("\nID\tName\tBasic\tHRA\tDA\tGross\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                               emp[i].id,
                               emp[i].name,
                               emp[i].basic,
                               emp[i].hra,
                               emp[i].da,
                               emp[i].gross);
                    }
                }
                break;

            case 3:
                printf("Enter Employee ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(emp[i].id == id) {
                        printf("\nEmployee Salary Details:\n");
                        printf("ID    : %d\n", emp[i].id);
                        printf("Name  : %s\n", emp[i].name);
                        printf("Basic : %.2f\n", emp[i].basic);
                        printf("HRA   : %.2f\n", emp[i].hra);
                        printf("DA    : %.2f\n", emp[i].da);
                        printf("Gross : %.2f\n", emp[i].gross);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Employee Not Found!\n");

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