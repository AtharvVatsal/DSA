#include <stdio.h>

// Non-Recursive Binary Search
// This function searches for the 'target' in the sorted array 'arr'.
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1; // Set high to size - 1 since array indexing starts from 0
    
    while (low <= high) {
        int mid = low + (high - low) / 2; // Calculate the mid index
        printf("Middle Index: %d, Middle Value: %d\n", mid, arr[mid]); // Check mid value in each iteration
        
        if (arr[mid] < target) { // If the target is greater than the mid value
            low = mid + 1; // Move to the right half
        } else if (arr[mid] > target) { // If the target is less than the mid value
            high = mid - 1; // Move to the left half
        } else {
            return mid; // Target found, return the index
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {1, 12, 25, 33, 41, 95}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    
    // Search for the target value '1'
    int result = binarySearch(arr, size, 1);
    if (result != -1) {
        printf("%d found at index %d\n", 1, result);
    } else {
        printf("%d not found\n", 1);
    }

    // Search for another target value '95'
    result = binarySearch(arr, size, 95);
    if (result != -1) {
        printf("%d found at index %d\n", 95, result);
    } else {
        printf("%d not found\n", 95);
    }

    // Search for a target value '100' (not in the array)
    result = binarySearch(arr, size, 100);
    if (result != -1) {
        printf("%d found at index %d\n", 100, result);
    } else {
        printf("%d not found\n", 100);
    }

    return 0;
