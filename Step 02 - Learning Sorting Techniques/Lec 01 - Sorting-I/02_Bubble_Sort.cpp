#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    // Outer loop to iterate over the unsorted portion of the array.
    for (int i = n - 1; i >= 0; i--) {  
        // Inner loop to compare adjacent elements up to the unsorted portion.
        for (int j = 0; j <= i - 1; j++) {  
            // Swap if the left element is greater than the right.
            if (arr[j] > arr[j + 1]) { 
                // Store the right element temporarily.
                int temp = arr[j + 1];  
                // Move the left element to the right position.
                arr[j + 1] = arr[j];
                // Assign the temporarily stored right element to the left position.
                arr[j] = temp;
            }
        }
    }

    // Output after sorting.
    cout << "After Using bubble sort: " << "\n";
    for (int i = 0; i < n; i++) {
        // Print each element of the sorted array.
        cout << arr[i] << " ";  
    }
    // Move to the next line.
    cout << "\n";
}

int main() {
    // Define an array of integers to be sorted.
    int arr[] = {13, 46, 24, 52, 20, 9};
    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Display message before sorting.
    cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++) {
        // Print each element of the unsorted array.
        cout << arr[i] << " ";
    }
    // Move to the next line.
    cout << endl;

    // Call the bubble_sort function to sort the array.
    bubble_sort(arr, n);
    // Return 0 to indicate successful execution.
    return 0;
}
