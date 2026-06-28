#include <stdio.h>

struct Bank {
    int accNo;
    char name[50];
    float balance;
};

int main() {
    struct Bank acc[100];
    int n = 0, choice, i, accNo, found;
    float amount;

    do {
        printf("\n===== Bank Account Management System =====\n");
        printf("1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit Money\n");
        printf("4. Withdraw Money\n");
        printf("5. Search Account\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &acc[n].accNo);

                printf("Enter Account Holder Name: ");
                scanf("%s", acc[n].name);

                printf("Enter Initial Balance: ");
                scanf("%f", &acc[n].balance);

                n++;
                printf("Account Created Successfully!\n");
                break;

            case 2:
                if(n == 0) {
                    printf("No Accounts Found!\n");
                } else {
                    printf("\nAccount Details\n");
                    printf("Acc No\tName\tBalance\n");

                    for(i = 0; i < n; i++) {
                        printf("%d\t%s\t%.2f\n",
                               acc[i].accNo,
                               acc[i].name,
                               acc[i].balance);
                    }
                }
                break;

            case 3:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(acc[i].accNo == accNo) {
                        printf("Enter Amount to Deposit: ");
                        scanf("%f", &amount);

                        acc[i].balance += amount;

                        printf("Amount Deposited Successfully!\n");
                        printf("Updated Balance: %.2f\n", acc[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 4:
                printf("Enter Account Number: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(acc[i].accNo == accNo) {

                        printf("Enter Amount to Withdraw: ");
                        scanf("%f", &amount);

                        if(amount <= acc[i].balance) {
                            acc[i].balance -= amount;
                            printf("Withdrawal Successful!\n");
                            printf("Remaining Balance: %.2f\n", acc[i].balance);
                        } else {
                            printf("Insufficient Balance!\n");
                        }

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 5:
                printf("Enter Account Number to Search: ");
                scanf("%d", &accNo);

                found = 0;

                for(i = 0; i < n; i++) {
                    if(acc[i].accNo == accNo) {

                        printf("\nAccount Found\n");
                        printf("Account Number : %d\n", acc[i].accNo);
                        printf("Name           : %s\n", acc[i].name);
                        printf("Balance        : %.2f\n", acc[i].balance);

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Account Not Found!\n");

                break;

            case 6:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}