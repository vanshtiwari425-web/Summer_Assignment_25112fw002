#include <stdio.h>

int main() {
    char str[100], temp;
    int choice, i, length, flag;

    do {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Enter String\n");
        printf("2. Display String\n");
        printf("3. Find Length\n");
        printf("4. Reverse String\n");
        printf("5. Check Palindrome\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("Enter a string: ");
                scanf("%s", str);
                break;

            case 2:
                printf("String: %s\n", str);
                break;

            case 3:
                length = 0;
                while(str[length] != '\0')
                    length++;

                printf("Length = %d\n", length);
                break;

            case 4:
                length = 0;
                while(str[length] != '\0')
                    length++;

                for(i = 0; i < length / 2; i++) {
                    temp = str[i];
                    str[i] = str[length - i - 1];
                    str[length - i - 1] = temp;
                }

                printf("Reversed String: %s\n", str);
                break;

            case 5:
                length = 0;
                while(str[length] != '\0')
                    length++;

                flag = 1;

                for(i = 0; i < length / 2; i++) {
                    if(str[i] != str[length - i - 1]) {
                        flag = 0;
                        break;
                    }
                }

                if(flag)
                    printf("String is Palindrome.\n");
                else
                    printf("String is Not Palindrome.\n");

                break;

            case 6:
                for(i = 0; str[i] != '\0'; i++) {
                    if(str[i] >= 'a' && str[i] <= 'z')
                        str[i] = str[i] - 32;
                }

                printf("Uppercase String: %s\n", str);
                break;

            case 7:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}