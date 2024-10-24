#include <stdio.h>

// Linear Search
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1; // Element not found
}

// Binary Search (assuming the array is sorted in ascending order)
int binarySearch(int arr[], int left, int right, int target) {
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1; // Element not found
}

// Interpolation Search (assuming the array is sorted in ascending order)
int interpolationSearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right && target >= arr[left] && target <= arr[right]) {
        int pos = left + (((double)(right - left) / (arr[right] - arr[left])) * (target - arr[left]));

        if (arr[pos] == target) {
            return pos;
        } else if (arr[pos] < target) {
            left = pos + 1;
        } else {
            right = pos - 1;
        }
    }

    return -1; // Element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int linearResult = linearSearch(arr, n, target);
    int binaryResult = binarySearch(arr, 0, n - 1, target);
    int interpolationResult = interpolationSearch(arr, n, target);

    if (linearResult != -1) {
        printf("Linear Search: Element found at index %d\n", linearResult);
    } else {
        printf("Linear Search: Element not found\n");
    }

    if (binaryResult != -1) {
        printf("Binary Search: Element found at index %d\n", binaryResult);
    } else {
        printf("Binary Search: Element not found\n");
    }

    if (interpolationResult != -1) {
        printf("Interpolation Search: Element found at index %d\n", interpolationResult);
    } else {
        printf("Interpolation Search: Element not found\n");
    }

    return 0;
}
