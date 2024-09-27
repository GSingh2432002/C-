#include <bits/stdc++.h>
using namespace std;

// Function to calculate power without using floating-point pow()
int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

bool isArmstrong(int num) {
    // Calculate the number of digits in the given number
    int k = to_string(num).length();
    // Initialize the sum digits raised to the power of k to 0
    int sum = 0;
    // Copy the value of the input number to a temporary var 'n'
    int n = num;
    // Iterate through each digit of the number
    while (n > 0) {
        // Extract the last digit of the number
        int lastDigit = n % 10;
        // Add the digit raised to the power of k to the sum
        sum += power(lastDigit, k);  // Use the custom power function
        // Remove the last digit from the number
        n = n / 10;
    }
    // Check if the sum of digits raised to the power of k equals the original number
    return sum == num;
}

int main() {
    int number = 153;
    if (isArmstrong(number)) {
        cout << number << " is an Armstrong number." << endl;
    } else {
        cout << number << " is not an Armstrong number." << endl;
    }
    return 0;
}
