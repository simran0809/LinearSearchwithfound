#include <stdio.h>

int main() {
    int n, data, i;
    int found = 0; // Flag to check if the element is found

    // Example array and its size
    int a[] = {10, 20, 30, 40, 50, 60, 77, 85, 90, 100}; //n=11
    n = sizeof(a) / sizeof(a[0]);

    // Element to be searched
    printf("Enter the element to be searched: ");
    scanf("%d", &data);

    // Linear search algorithm
    for(i = 0; i < n; i++) {
        if (a[i] == data) {
            printf("Element found at index: %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element not found\n");
    }

    return 0;
}
