#include <stdio.h>

int main() {
    char str[100];
    int spaceCount = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            spaceCount++;
        }
    }

    printf("Number of spaces in the string: %d\n", spaceCount);

    return 0;
}
