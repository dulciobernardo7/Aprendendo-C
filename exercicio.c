#include <stdio.h>

int main() {
    char name[100];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character at the end of the input if present
    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    printf("Hello, %s!\n", name);
    return 0;
}
