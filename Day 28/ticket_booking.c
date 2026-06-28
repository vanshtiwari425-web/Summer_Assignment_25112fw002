#include <stdio.h>

struct Ticket {
    int ticketNo;
    char name[50];
    char destination[50];
    float fare;
    int booked;   // 1 = Booked, 0 = Cancelled
};

int main() {
    struct Ticket t[100];
    int n = 0, choice, i, ticketNo, found;

    do {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d", &t[n].ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s", t[n].name);

                printf("Enter Destination: ");
                scanf("%s", t[n].destination);

                printf("Enter Fare: ");
                scanf("%f", &t[n].fare);

                t[n].booked = 1;

                n++;
                printf("Ticket Booked Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Tickets Found!\n");
                } else {
                    printf("\n-------------------------------------------------\n");
                    printf("Ticket\tName\tDestination\tFare\tStatus\n");
                    printf("-------------------------------------------------\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%s\t\t%.2f\t",
                               t[i].ticketNo,
                               t[i].name,
                               t[i].destination,
                               t[i].fare);

                        if(t[i].booked == 1)
                            printf("Booked\n");
                        else
                            printf("Cancelled\n");
                    }
                }
                break;

            case 3:
                printf("Enter Ticket Number: ");
                scanf("%d", &ticketNo);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(t[i].ticketNo == ticketNo) {

                        printf("\nTicket Found\n");
                        printf("Ticket No : %d\n", t[i].ticketNo);
                        printf("Passenger : %s\n", t[i].name);
                        printf("Destination : %s\n", t[i].destination);
                        printf("Fare : %.2f\n", t[i].fare);

                        if(t[i].booked)
                            printf("Status : Booked\n");
                        else
                            printf("Status : Cancelled\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found!\n");

                break;

            case 4:
                printf("Enter Ticket Number to Cancel: ");
                scanf("%d", &ticketNo);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(t[i].ticketNo == ticketNo) {

                        if(t[i].booked == 1) {
                            t[i].booked = 0;
                            printf("Ticket Cancelled Successfully!\n");
                        } else {
                            printf("Ticket Already Cancelled!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Ticket Not Found!\n");

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