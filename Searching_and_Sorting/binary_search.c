#include <stdio.h>

#define MAX 100                     /* maximum array size we allow */

int main(void)
{
    int arr[MAX];                   /* sorted array of numbers */
    int n;                          /* actual number of elements */
    int key;                        /* element to search for */
    int i;                          /* loop counter for input */
    int low, high, mid;             /* boundaries and middle of the search range */
    int found = -1;                 /* index where key is found; -1 means not found */

    /* Step 1: Read the size of the array */
    printf("Enter the size of the array (1 to %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size! Size must be between 1 and %d.\n", MAX);
        return 1;
    }

    /* Step 2: Read the n elements (must be in ascending order) */
    printf("Enter %d elements in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Step 3: Read the element to search */
    printf("Enter the element to search: ");
    scanf("%d", &key);

    /* Step 4: Binary search */
    low = 0;                        /* first index of the range */
    high = n - 1;                   /* last index of the range */

    while (low <= high) {           /* continue while the range is not empty */
        mid = low + (high - low) / 2;   /* middle index (avoids overflow) */

        if (arr[mid] == key) {      /* found the key */
            found = mid;
            break;
        }
        else if (arr[mid] < key) {  /* key is larger, search the right half */
            low = mid + 1;
        }
        else {                      /* key is smaller, search the left half */
            high = mid - 1;
        }
    }

    /* Step 5: Print the result */
    if (found != -1) {
        printf("Element %d found at position %d (index %d).\n",
               key, found + 1, found);
    } else {
        printf("Element %d is NOT present in the array.\n", key);
    }

    return 0;
}