#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define NAME_LENGTH 50

int main() {
    char names[MAX_NAMES][NAME_LENGTH]; // Array to hold names
    char searchName[NAME_LENGTH];        // Name to search for
    int n;

    // Prompt for the number of names
    printf("Enter the number of names (max %d): ", MAX_NAMES);
    scanf("%d", &n);
    
    // Input names into the array
    printf("Enter %d names:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    // Prompt for the name to search
    printf("Enter the name to search for: ");
    scanf("%s", searchName);

    // Search for the name
    int found = 0; // Flag to indicate if name is found
    for (int i = 0; i < n; i++) {
        if (strcmp(names[i], searchName) == 0) {
            printf("Name '%s' found at index %d.\n", searchName, i);
            found = 1; // Set the flag to true
            break; // Exit the loop once found
        }
    }

    if (!found) {
        printf("Name '%s' not found in the list.\n", searchName);
    }

    return 0;
}
