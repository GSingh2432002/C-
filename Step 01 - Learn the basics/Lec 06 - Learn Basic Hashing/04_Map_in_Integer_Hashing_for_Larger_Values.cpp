#include<bits/stdc++.h> // Includes all standard libraries like iostream, vector, map, etc.
using namespace std;    // Simplifies usage of standard namespace elements like cout, cin.

int main() {
    int s;              // Variable to store the size of the array.
    cin >> s;           // Read the size of the array from user input.
    int arr[s];         // Declare an array of size `s`. (Note: Not valid in modern C++, better to use `vector`.)

    // Input elements into the array.
    for (int i = 0; i < s; i++) { 
        cin >> arr[i];  // Read each element of the array.
    }

    // Precompute the frequency of each element in the array.
    map<int, int> mpp;  // Declare a map to store element frequencies (key: element, value: frequency).
    for (int i = 0; i < s; i++) {
        mpp[arr[i]]++;  // Increment the frequency of the current element in the map.
    }

    // Print the frequency of each unique element in the array.
    for (auto i : mpp) {                          // Iterate through each key-value pair in the map.
        cout << i.first << "->" << i.second << endl; // Print the element (key) and its frequency (value).
    }

    // Process queries to find the frequency of specific numbers.
    int q;              // Variable to store the number of queries.
    cin >> q;           // Read the number of queries.
    while (q--) {       // Loop for `q` queries.
        int number;     
        cin >> number;  // Read the number for which frequency is queried.
        cout << mpp[number] << endl; // Output the frequency of the queried number. 
                                     // If `number` does not exist in the map, this returns 0.
    }

    return 0;           // Indicate successful program termination.
}
