#include <stdio.h>

struct Patient {
    int id;
    char name[50];
    int age;
    char disease[50];
};

struct Patient p[100];
int n = 0;

void addPatient();
void displayPatients();
void searchPatient();
void updatePatient();

int main() {
    int choice;

    do {
        printf("\n===== Hospital Management System =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Search Patient\n");
        printf("4. Update Patient Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                addPatient();
                break;

            case 2:
                displayPatients();
                break;

            case 3:
                searchPatient();
                break;

            case 4:
                updatePatient();
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

void addPatient() {
    printf("Enter Patient ID: ");
    scanf("%d", &p[n].id);

    printf("Enter Patient Name: ");
    scanf("%s", p[n].name);

    printf("Enter Age: ");
    scanf("%d", &p[n].age);

    printf("Enter Disease: ");
    scanf("%s", p[n].disease);

    n++;

    printf("Patient Added Successfully!\n");
}

void displayPatients() {
    int i;

    if(n == 0) {
        printf("No Patient Records Found!\n");
        return;
    }

    printf("\nID\tName\tAge\tDisease\n");

    for(i = 0; i < n; i++) {
        printf("%d\t%s\t%d\t%s\n",
               p[i].id,
               p[i].name,
               p[i].age,
               p[i].disease);
    }
}

void searchPatient() {
    int id, i;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(p[i].id == id) {
            printf("\nPatient Found\n");
            printf("ID      : %d\n", p[i].id);
            printf("Name    : %s\n", p[i].name);
            printf("Age     : %d\n", p[i].age);
            printf("Disease : %s\n", p[i].disease);
            return;
        }
    }

    printf("Patient Not Found!\n");
}

void updatePatient() {
    int id, i;

    printf("Enter Patient ID: ");
    scanf("%d", &id);

    for(i = 0; i < n; i++) {
        if(p[i].id == id) {

            printf("Enter New Name: ");
            scanf("%s", p[i].name);

            printf("Enter New Age: ");
            scanf("%d", &p[i].age);

            printf("Enter New Disease: ");
            scanf("%s", p[i].disease);

            printf("Patient Record Updated Successfully!\n");
            return;
        }
    }

    printf("Patient Not Found!\n");
}