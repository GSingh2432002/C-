#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n){
    // Initialize a var to store the reverse of the number
    int revNum = 0;
    // Iterate a duplicate var to store the original number
    int dup = n;
    // Iterate through each digit of the number until it becomes 0
    while(n>0){
        // Extract the last digit of the number
        int lastDigit = n % 10;
        // Build the reverse number by appending the last digit
        revNum = (revNum * 10) + lastDigit;
        // Remove the last digit from the original number
        n = n / 10;
    }
    // Check if the original number is equal to its reverse
    if(dup == revNum){
        return true;
    }else{
        return false;
    }
}
int main() {
    int number = 4554;
    if (palindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }
    return 0;
}