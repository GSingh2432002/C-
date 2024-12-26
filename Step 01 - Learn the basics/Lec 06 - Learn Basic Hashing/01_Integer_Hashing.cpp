#include<bits/stdc++.h> // Includes all standard C++ libraries for convenience.
using namespace std;    // Allows the use of standard functions (e.g., cin, cout) without the std:: prefix.

int main(){
    int n; // Declares an integer 'n' to store the size of the array.
    cin >> n; // Reads the size of the array from the user.

    int arr[n]; // Declares an array 'arr' of size 'n' to store input numbers.
    for(int i = 0; i < n; i++){ 
        cin >> arr[i]; // Reads 'n' integers from the user and stores them in 'arr'.
    }

    // Precomputing the hash array
    int hash[13] = {0}; // Declares a hash array of size 13 and initializes all elements to 0.
                        // This will be used to count the frequency of numbers from 0 to 12 in 'arr'.

    for(int i = 0; i < n; i++){ 
        hash[arr[i]] += 1; // Increments the count of the number at index 'arr[i]' in the hash array.
                           // Example: If arr[i] = 3, then hash[3] is incremented by 1.
    }

    int q; // Declares an integer 'q' to store the number of queries.
    cin >> q; // Reads the number of queries from the user.

    // Display the number of queries for clarity.
    cout << "The number of Queries are: " << q << endl;

    // Processing each query
    while(q--){ // Runs a loop 'q' times. The value of 'q' is decremented after each iteration.
        int number; // Declares a variable 'number' to store the current query input.
        cin >> number; // Reads the query number from the user.

        // Fetching the result from the hash array
        if(hash[number] > 0){ // Checks if 'hash[number]' is greater than 0.
                              // If true, the number exists in 'arr', and its count is stored in hash[number].
            cout << number << " is present " << hash[number] << " times." << endl;
            // Outputs the number and its frequency in the array.
        }else{ // If 'hash[number]' is 0, the number does not exist in 'arr'.
            cout << number << " is not present." << endl;
            // Outputs that the number is not present.
        }
    }

    return 0; // Indicates successful program execution.
}

/*
    Output:-
        6 // Size of the array
        1 2 3 1 2 3 // This is the array of size 6
        5 // Number of queries
        1 // First query
        1 is present 2 times. // Output of the first query
        2 // Second query
        2 is present 2 times. // Output of the second query
        3 // Third query
        3 is present 2 times. // Output of the third query
        4 // Fourth query
        4 is not present. // Output of the fourth query
        5 // Fifth query
        5 is not present. // Output of the fifth query
*/