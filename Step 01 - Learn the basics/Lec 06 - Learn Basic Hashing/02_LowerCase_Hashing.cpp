#include<bits/stdc++.h> // Includes all standard libraries (iostream, string, etc.)
using namespace std;    // Simplifies usage of standard namespace elements (cin, cout, etc.)

int main() {
    string s;           // Declare a string to store the input.
    cin >> s;           // Read the string from the user.

    // Precompute the frequency of each lowercase English letter ('a' to 'z').
    int hash[26] = {0}; // Array to store the frequency of 26 letters ('a' to 'z').
                        // Initialize all elements to 0.
    for (int i = 0; i < s.size(); i++) {
        hash[s[i] - 'a']++; // Calculate the index for the letter by subtracting 'a' from the ASCII value of `s[i]`.
                           // Increment the frequency of the corresponding letter.
    }

    int q;              // Declare a variable to store the number of queries.
    cin >> q;           // Read the number of queries.
    while (q--) {       // Loop for each query.
        char c;         
        cin >> c;       // Read the character to query.

        // Fetch the hash value for the character and output it.
        cout << hash[c - 'a'] << endl; // Calculate the index for the character and output its frequency.
                                       // Assumes `c` is a lowercase letter ('a' to 'z').
    }
    
    return 0;           // Indicate successful program termination.
}
