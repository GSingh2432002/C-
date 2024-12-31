#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    // Outer loop: iterate through the array up to the second last element
    for (int i = 0; i < n - 2; i++) { 
        int min = i; // Assume the current index 'i' is the index of the minimum element
        
        // Inner loop: find the index of the minimum element in the unsorted part of the array
        for (int j = i; j <= n - 1; j++) { 
            if (arr[j] < arr[min]) { // Compare elements to find the smallest one
                min = j; // Update the index of the minimum element
            }
        }
        
        // Swap the smallest element with the element at index 'i'
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}


int main() { 
    int n; // Declare an integer variable to store the size of the array
    cin >> n; // Take input from the user for the size of the array
    
    int arr[n]; // Declare an array of size 'n' to hold 'n' integer elements
    
    // Loop to take 'n' elements as input and store them in the array
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take input for the i-th element of the array
    }
    
    selectionSort(arr, n); // Call the selectionSort function to sort the array
    
    // Loop to print each element of the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Output the i-th element followed by a space
    }
    
    return 0; // Return 0 to indicate successful program execution
}