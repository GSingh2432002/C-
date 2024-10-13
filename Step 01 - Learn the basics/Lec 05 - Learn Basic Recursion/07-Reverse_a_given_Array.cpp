// Approach 1: Space optimized iterative method
// Step 1:- Keep a pointer p1 at the first index and another p2 at the last index of the array.
// Step 2:- Swap the elements pointed by p1 and p2, Post swapping increment p1 and decrement p2.
// Step 3:- This is repeated for only the first n/2 elements where n is the length of array.
#include<bits/stdc++.h>
using namespace std;

// This function prints the elements of the array
void printArray(int arr[], int n){
    // This line outputs the message to print the reversed array
    cout<< "The reversed array is:- " << endl;

    // This is a for loop that iterates over the array from the index 0 to n-1 and prints each element followed by a space
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
// This function reverses the elements of the array
void reverseArray(int arr[], int n){
    // Two pointers, p1 starting at the beginning 0 and p2 starting at the end n-1 of the array
    int p1 = 0, p2 = n - 1;

    // A while loop that continues as long as p1 is less than p2. This ensures that the loop runs until the middle of the array is reached, where swapping would be complete.
    while(p1<p2){
        // The swap function exchanges the values of arr[p1] and ar[p2] the element at the start of the array is swapped with the element at the end.
        swap(arr[p1], arr[p2]);

        // After each swap, p1 is incremented by 1 to move towards the middle from the left side, and p2 is decremented by 1 to move towards the middle from the right side.
        p1++; p2--;
    }
    // After reversing the array, the printArray function is called to print the reversed array.
    printArray(arr,n);
}

int main(){
    // This defines the size of array as 5
    int n = 5;

    // This initialize an integer array with the elements {5,4,3,2,1}
    int arr[] = {5,4,3,2,1};

    // The reverseArray function is called with arr and n arguments, reversing the array
    reverseArray(arr,n);

    // This indicates that the program executed successfully and returns 0 to the operating system.
    return 0;
}

// Approach 2:- Recursive Method
// Step 1:- Create a function that takes an array, start index, and end index of the array as parameters
// Step 2:- Swap the elements present at the start and end index,
// Step 3:- The portion of the array left to be reversed is arr[start+1, end-1]. Make a recursive call to reverse the rest of the array. While calling recursion pass start+1 and ends-1 as parameters for the shrunk array. Repeat step 2.
// Step 4:- Continue recursion as long as the "start<end" condition is satisfied. This is the base case for our recursion.
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n){
    cout << "The reversed array is:- " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void reverseArray(int arr[], int start, int end){
    if(start < end){
        swap(arr[start], arr[end]);
        reverseArray(arr, start+1, end-1);
    }
}

int main(){
    int n =5;
    int arr[] = {5,4,3,2,1};
    reverseArray(arr, 0, n-1);
    printArray(arr, n);
    return 0;
}