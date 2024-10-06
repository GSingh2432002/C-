// This line includes all standard C++ library headers.
#include<bits/stdc++.h>

// This line allows the use of names from the std namespace without needing to prefix them with std::
using namespace std;

// This defines the function that takes two integer parameters i as starting index and n the upper limit. The function's purpose is to print "Gaurav" n times recursively starting from i.
void func(int i, int n){
    // This is the base condition for the recursion. If the value of i becomes greater than n, the function stops executing by using return. This prevents infinite recursion and is a critical part of recursive functions.
    if(i>n) return;

    // This line prints the string "Gaurav" to the console, followed by a newline. Each time the function "func" is called, "Gaurav" is printed, as long as the base condition is not met.
    cout << "Gaurav" << endl;

    // This is the recursive call to the function func. The value of i is incremented by 1, and the updated i is passed to the next function call. The recursion will continue until the base condition i>n is satisfied.
    func(i+1,n);
}

// This is the begining of the main function, which is the entry point of the program
int main(){
    // An integer variable n is declared. It will store the number of times the user wants to print "Gaurav"
    int n;

    // This line takes input from the user and stores it in the variable n. It allows the user to decide how many times "Gaurav" will be printed.
    cin >> n;

    // This line calls the "func" function with the starting value of 1 for i and the user provided value for n. This begins the recursive process, printing "Gaurav" repeatedly until i exceeds n.
    func(1,n);

    // This statement indicates that the main function has successfully executed. Returning 0 means the program terminated without errors.
    return 0;
}