#include <stdio.h>
int calculateLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
void reverseString(char str[]) {
    int length = calculateLength(str);
    int start = 0, end = length - 1;
    while (start < end) {

        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    char note[1000];
    printf("Enter a note:\n");
    fgets(note, sizeof(note), stdin);


    int len = calculateLength(note);
    if (note[len - 1] == '\n') {
        note[len - 1] = '\0';
    }


    int length = calculateLength(note);
    printf("Length of the note: %d\n", length);


    reverseString(note);
    printf("Reversed note: %s\n", note);

    return 0;
}
