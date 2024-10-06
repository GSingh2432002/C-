// This line includes all standard C++ library headers.
#include<bits/stdc++.h>

// This line allows the use of names from the std namespace without needing to prefix them with std::
using namespace std;

// This is the function declaration and definition. The function "func" two parameters i which is the current number that will be printed and where n is the limit up to which numbers will be printed.
void func(int i, int n){
    // This is the base condition for recursion. It checks if i is greater than n. If it is, the function stops executing by using the return statement.
    if(i>n){
        return;
    }

    // This line prints the current value of i to the console. Each time this function is called, the current number i is printed.
    cout << i << endl;
    
    // This line makes the recursive call to the function "func". It increments the value of i by 1 and calls the function again with the updated value of i. This recursion will continue until i exceeds n.
    func(i+1, n);
}

// This is the main function, the entry point for program execution in C++.
int main(){
    // Here an integer variable n is declared. This will be used to store the user input, representing the limit up to which the function should print the numbers.
    int n;

    // This takes input from the user and stores it in the variable n. The user enters a number that determines how many times the function should print the values of i.
    cin >> n;

    // This is where the recursive function "func" is called for the first time with the initial value of i = 1. The recursion begins from i=1 and continues until i exceeds n.
    func(1,n);

    // This lines signifies the end of the main function. Returning 0 means that the program has successfully executed without errors.
    return 0;
}