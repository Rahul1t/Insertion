#include <stdio.h>
int main()
{
    int LA[50], n, k, item;
    printf("Enter the Number of Element in Array: ");
    scanf("%d", &n);

    printf("Enter %d element of Array:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &LA[i]);
    }

    printf("Array element before insertion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", LA[i]);
    }
    printf("\n");
    printf("Enter the possition to insert (0-based index): ");
    scanf("%d", &k);

    if (k < 0 || k > n)
    {
        printf("invalid position\n");
    }
    else
    {
        printf("Enter the element to insert: ");
        scanf("%d", &item);

        for (int i = n - 1; i >= k; i--)
        {
            LA[i + 1] = LA[i];
        }
        LA[k] = item;
        n++;
        printf("array Elemnet after Insertion:");
        for (int i = 0; i < n; i++)
        {
            printf("%d\n", LA[i]);
        }
        printf("\n");
    }
}