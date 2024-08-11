//8. search a character in alphabets 

#include <stdio.h>
#include <stdbool.h>

void readArray(char alphabets[], int n) {
    printf("Enter %d characters:\n", n);
    for (int i = 0; i < n; i++) {
        scanf(" %c", &alphabets[i]);
    }
}

void displayArray(char alphabets[], int n) {
    printf("The characters in the array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", alphabets[i]);
    }
    printf("\n");
}

void searchCharacter(char alphabets[], int n, char key) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (alphabets[i] == key) {
            printf("Character '%c' found at index %d\n", key, i);
            found = true;
            break;
        }
    }
    if (!found) {
        printf("Character '%c' not found in the array.\n", key);
    }
}

int main() {
    int n;
    printf("Enter the number of characters you want to input:\n");
    scanf("%d", &n);

    char alphabets[n];
    readArray(alphabets, n);

    displayArray(alphabets, n);

    char key;
    printf("Enter the character you want to search for:\n");
    scanf(" %c", &key);

    searchCharacter(alphabets, n, key);

    return 0;
}

