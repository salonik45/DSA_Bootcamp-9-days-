#include <stdio.h>

// Linear Search function
int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    (result == -1) ? printf("Element not found\n")
                   : printf("Element found at index %d\n", result);

    return 0;
}
