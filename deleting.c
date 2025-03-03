#include <stdio.h>

int main() {
    int n, k, item;

    // Input number of elements
    printf("Enter the Number of Elements in the Array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the %d Elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Display array before deletion
    printf("Array Before Deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Input element position to delete
    printf("Enter the Position to delete: ");
    scanf("%d", &k);

    // Validate position
    if (k < 0 || k >= n) {
        printf("Invalid Position\n");
        return 1;
    }

    // Store deleted item
    item = arr[k];
    printf("Element deleted: %d\n", item);

    // Shift elements to the left
    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Display array after deletion
    printf("Array After Deletion: ");
    for (int i = 0; i < n - 1; i++) {  // Reduce the range to n-1
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
