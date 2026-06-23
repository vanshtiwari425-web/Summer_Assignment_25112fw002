#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, j, len1 = 0, len2 = 0, flag = 1;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    // Find lengths
    while(str1[len1] != '\0')
        len1++;

    while(str2[len2] != '\0')
        len2++;

    if(len1 != len2) {
        printf("Strings are not Anagrams.\n");
        return 0;
    }

    // Compare characters
    for(i = 0; i < len1; i++) {
        flag = 0;

        for(j = 0; j < len2; j++) {
            if(str1[i] == str2[j]) {
                flag = 1;
                str2[j] = '*';   // Mark character as used
                break;
            }
        }

        if(flag == 0) {
            printf("Strings are not Anagrams.\n");
            return 0;
        }
    }

    printf("Strings are Anagrams.\n");

    return 0;
}