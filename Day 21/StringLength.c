#include<stdio.h>
int main(){
    int count = 0;
    char word[100];
    printf("Enter the word: ");
    scanf("%s",word);
    while(word[count]!='\0'){
        count++;
    }
    printf("Length of String: %d",count);
    return 0;
}