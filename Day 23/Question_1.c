#include <stdio.h>

int main() {
    char str[100];
    int i, j, flag;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        flag = 1;

        for(j = 0; str[j] != '\0'; j++) {
            if(i != j && str[i] == str[j]) {
                flag = 0;
                break;
            }
        }

        if(flag) {
            printf("First non-repeating character: %c\n", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found.\n");

    return 0;
}