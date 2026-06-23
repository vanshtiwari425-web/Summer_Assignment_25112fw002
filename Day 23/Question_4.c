#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char maxChar;

    printf("Enter a string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {

        count = 1;

        if(str[i] == '*')
            continue;

        for(j = i + 1; str[j] != '\0'; j++) {
            if(str[i] == str[j]) {
                count++;
                str[j] = '*';    // Mark as counted
            }
        }

        if(count > max) {
            max = count;
            maxChar = str[i];
        }
    }

    printf("Maximum occurring character: %c\n", maxChar);
    printf("Frequency: %d\n", max);

    return 0;
}