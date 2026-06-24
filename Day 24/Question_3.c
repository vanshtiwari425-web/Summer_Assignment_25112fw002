#include <stdio.h>
#include <string.h>

int main() {
    char str[100], longest[100];
    int i = 0, j = 0, max = 0;
    char word[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            word[j++] = str[i];
        } else {
            word[j] = '\0';

            if (j > max) {
                max = j;
                strcpy(longest, word);
            }

            j = 0;
        }

        i++;
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", max);

    return 0;
}