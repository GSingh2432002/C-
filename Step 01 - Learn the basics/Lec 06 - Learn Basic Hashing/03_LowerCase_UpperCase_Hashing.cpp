#include<bits/stdc++.h> // Includes all standard libraries (iostream, string, etc.)
using namespace std;    // Simplifies usage of standard namespace elements (cin, cout, etc.)

int main() {
    string s;           // Declare a string to store the input.
    cin >> s;           // Read the string from the user.

    // Precompute the frequency of each character in the string using hashing.
    int hash[256] = {0}; // Array to store the frequency of all possible ASCII characters.
                         // Initialize all elements to 0.
    for (int i = 0; i < s.size(); i++) { 
        hash[s[i]]++;    // Increment the frequency of the character `s[i]`.
    }

    int q;              // Declare a variable for the number of queries.
    cin >> q;           // Read the number of queries.
    while (q--) {       // Process each query in the loop.
        char c;         
        cin >> c;       // Read the character to query.
        cout << hash[c] << endl; // Output the frequency of the queried character.
                                 // If `c` is not in the string, the frequency will be 0.
    }

    return 0;           // Indicate successful program termination.
}
