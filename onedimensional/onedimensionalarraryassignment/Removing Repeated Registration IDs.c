//Removing Repeated Registration IDs
//During online event registration, some student IDs were recorded multiple times due to a technical issue. 
//Given the array of IDs, produce a revised array containing each ID only once while preserving the order of its first occurrence.
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of registrations: ");
    scanf("%d", &n);
    int registration[n];
    int new_array[n];
    int k = 0;
    // Input registration IDs
    for (int i = 0; i < n; i++) {
        printf("Enter ID: ");
        scanf("%d", &registration[i]);
    }
    // Remove duplicate IDs
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < k; j++) {
            if (registration[i] == new_array[j]) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            new_array[k] = registration[i];
            k++;
        }
    }
    // Print unique IDs
    printf("New array is: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", new_array[i]);
    }

    return 0;
}