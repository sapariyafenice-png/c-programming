
#include <stdio.h>
#include <string.h>

void reverseWord(char *word, int length) {
    int start = 0;
    int end = length - 1;
    char temp;

    while (start < end) {
        temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

int isLetter(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

int isDigit(char ch) {
    return (ch >= '0' && ch <= '9');
}

int isAlphaNumeric(char ch) {
    return isLetter(ch) || isDigit(ch);
}

int main() {
    printf("ID No: 25CE105\n\n");
    FILE *file;
    char filename[] = "32.txt";
    char ch;
    char word[100];
    int index = 0;
    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("Reversed words from %s:\n", filename);
    printf("----------------------------\n");

    while ((ch = fgetc(file)) != EOF) {
        if (isAlphaNumeric(ch)) {
            word[index++] = ch;
        } else {
            if (index > 0) {
                word[index] = '\0';
                reverseWord(word, index);
                printf("%s", word);
                index = 0;
            }
            putchar(ch);
        }
    }

    if (index > 0) {
        word[index] = '\0';
        reverseWord(word, index);
        printf("%s", word);
    }

    fclose(file);
    return 0;
}
