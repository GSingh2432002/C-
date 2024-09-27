// Brute-Force Approach
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// Function to count the number of digits in an integer 'n'
int countDigits(int n){
    // Initialize a counter variable "count" to store the count of digits
    int count = 0;
    // While loop iterates until 'n' becomes 0 (no more digits left)
    while(n>0){
        // Increment the counter for each digit encountered
        count = count + 1;
        // Divide 'n' by 10 to remove the last digit
        n = n / 10;
    }
    // Return the count of digits
    return count;
}
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);
}