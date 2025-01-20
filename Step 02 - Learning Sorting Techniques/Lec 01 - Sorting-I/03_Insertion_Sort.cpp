// Includes all standard libraries for convenience (not recommended in large projects due to performance overhead).
#include <bits/stdc++.h>
// Allows using standard library functions without the 'std::' prefix.
using namespace std; 

// Function to perform insertion sort on an array arr of size n.
void insertion_sort(int arr[], int n) {
    // Loop through each element in the array from index 0 to n-1.
    for (int i = 0; i <= n - 1; i++) {
        // Initialize j to the current index i.
        int j = i;
        // While 'j' is greater than 0 and the previous element is greater than the current element.
        while (j > 0 && arr[j - 1] > arr[j]) {
            // Store the value of arr[j-1] in a temporary variable for swapping.
            int temp = arr[j - 1];
            // Move the smaller element to the previous position.
            arr[j - 1] = arr[j];
            // Place the stored value (larger element) in the current position.
            arr[j] = temp;
            // Decrement j to continue checking and swapping elements in the sorted part.
            j--;
        }
    }

    // Display a message indicating sorting is complete.
    cout << "After Using insertion sort: " << "\n";
    // Loop through the sorted array to print each element.
    for (int i = 0; i < n; i++) {        
        // Print each element followed by a space.
        cout << arr[i] << " ";
    }
    // Print a newline after displaying the sorted array.
    cout << "\n";                        
}

// Main function where program execution begins.
int main() {
    // Declare and initialize an array with unsorted elements.
    int arr[] = {13, 46, 24, 52, 20, 9};
    // Calculate the number of elements in the array.
    int n = sizeof(arr) / sizeof(arr[0]);
    // Print a message before displaying the initial array.
    cout << "Before Using insertion Sort: " << endl;
    // Loop through the array to print each element.
    for (int i = 0; i < n; i++) {
        // Print each element followed by a space.
        cout << arr[i] << " ";
    }
    // Print a newline after displaying the initial array.
    cout << endl;

    // Call the insertion_sort function to sort the array.
    insertion_sort(arr, n);
    // Return 0 to indicate successful program execution.
    return 0;
}
