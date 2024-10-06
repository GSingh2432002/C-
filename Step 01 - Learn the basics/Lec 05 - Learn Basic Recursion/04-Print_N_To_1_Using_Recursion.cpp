// This line includes all standard C++ library headers.
#include<bits/stdc++.h>

// This line allows the use of names from the std namespace without needing to prefix them with std::
using namespace std;

// int i: This is the current number to be printed, starting from n and decrementing towards 1. int n: This represents the total number from which the countdown starts.
void func(int i, int n){
    // This is the base condition for the recursion. It checks if i has become less than 1. If it has the function stops executing further recursive calls by using the return statement. This prevents the recursion from going into negative numbers and terminates it when the countdown reaches 0.
    if(i < 1){
        return;
    }

    // This line prints the current value of i followed by a newline. Each time the function is called it prints the current value of i.
    cout << i << endl;

    // This line makes a recursive call to the function "func" with the value of i decremented by 1. The recursion continues, printing the values of i in descending order until i becomes less than 1, at which point the recursion stops(because of the base condition).
    func(i-1, n);
}

// This is the main function, the entry point of the program. Every C++ program must have a main function where execution starts.
int main(){
    // An integer variable n is declared. This will be used to store the number that the user inputs.
    int n;

    // This line takes an input from the user and stores it in the variable n. The input specifies the number from which the countdown begins.
    cin >> n;

    // This line calls the recursive function "func" for the first time, starting with i=n and n=n. The countdown will begin from the user provided value of n.
    func(n,n);

    // This line signifies the successful termination of the main function. Returning 0 typically indicates that the program executed without any errors.
    return 0;
}