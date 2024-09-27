#include<iostream>
using namespace std;
int main(){
    // Declare a var 'n' to store the input integer
    int n;
    // User to enter an integer and store it in 'n'
    cin>>n;
    // Initialize a var 'revNum' to store the reverse of the input integer
    int revNumber = 0;
    // Start a while loop to reverse the digits of the input integer
    while(n>0){
        // Extract the last digit of 'n' and store it in 'lastDigit'
        int lastDigit = n % 10;
        // Multiply the current reverse number by 10 and add the last digit
        revNumber = (revNumber * 10) + lastDigit;
        // Remove the last digit from 'n'
        n = n / 10;
    }
    // Print the reversed number
    cout<<revNumber;
}