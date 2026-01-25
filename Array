#include <stdio.h>

int main() {
    int arr[100];
    int n, choice;
    int i, pos, value, key;
    int found = 0;

    // Input array size
    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n---- ARRAY OPERATIONS MENU ----\n");
        printf("1. Traverse\n");
        printf("2. Insert\n");
        printf("3. Delete\n");
        printf("4. Search\n");
        printf("5. Update\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

        // Traversing
        case 1:
            printf("Array elements are:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;

        // Insertion
        case 2:
            printf("Enter position to insert (0 to %d): ", n);
            scanf("%d", &pos);
            printf("Enter value to insert: ");
            scanf("%d", &value);

            for (i = n; i > pos; i--) {
                arr[i] = arr[i - 1];
            }
            arr[pos] = value;
            n++;

            printf("Element inserted successfully.\n");
            break;

        // Deletion
        case 3:
            printf("Enter position to delete (0 to %d): ", n - 1);
            scanf("%d", &pos);

            for (i = pos; i < n - 1; i++) {
                arr[i] = arr[i + 1];
            }
            n--;

            printf("Element deleted successfully.\n");
            break;

        // Searching
        case 4:
            printf("Enter element to search: ");
            scanf("%d", &key);
            found = 0;

            for (i = 0; i < n; i++) {
                if (arr[i] == key) {
                    printf("Element found at index %d\n", i);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("Element not found\n");
            }
            break;

        // Updation
        case 5:
            printf("Enter position to update (0 to %d): ", n - 1);
            scanf("%d", &pos);
            printf("Enter new value: ");
            scanf("%d", &value);

            arr[pos] = value;
            printf("Element updated successfully.\n");
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}
