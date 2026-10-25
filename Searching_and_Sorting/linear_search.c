#include <stdio.h>

#define MAX 100                 /* maximum array size we allow */

int main(void)
{
    int arr[MAX];               /* array to store the elements */
    int n;                      /* number of elements (size of array) */
    int key;                    /* element to search for */
    int i;                      /* loop counter */
    int found = -1;             /* index where key is found; -1 means "not found" */

    /* Step 1: Take the size of the array */
    printf("Enter the size of the array (1 to %d): ", MAX);
    scanf("%d", &n);

    if (n <= 0 || n > MAX) {
        printf("Invalid size! Size must be between 1 and %d.\n", MAX);
        return 1;               /* non-zero return signals an error */
    }

    /* Step 2: Read n elements into the array */
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    /* Step 3: Read the element to search */
    printf("Enter the element to search: ");
    scanf("%d", &key);

    /* Step 4: Linear search */
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;          /* remember the index */
            break;              /* stop searching, we already found it */
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