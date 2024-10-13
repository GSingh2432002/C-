// Recursive Approach:- Factorial of a Number:-
/*
    The factorial a number N can be calculated by multiplying all the natural numbers till the number N. Through this approach, we can visualize the factorial of n natural numbers in the following way as shown below: factorial(N) = N * factorial(N-1);
    The Factorial of N natural numbers is the Nth integer multiplied by the Factorial of (N-1) natural numbers. The base case can be visualized as if n decreases to 0, then we return 1 because the factorial of 0 is 1 only. Here, we have just broken the problem into 2 subparts and the answer of both would be multiplied together and stored in the factorial(n) function which would then be printed at last.
*/
#include<bits/stdc++.h>
using namespace std;

// This line defines a function "factorial" that takes an integer n as an argument. The function will return an integer, representing the factorial of n.
int factorial(int n){
    // This is the base condition of the recursive function. If n is 0, the function returns 1. This is because the factorial of 0 is defined as 1. This base case stops the recursion from continuing indefinitely.
    if(n == 0){
        return 1;
    }

    // This is the recursive call. The function calls itself with the argument n-1 and multiplies the result by n. This continues until n becomes 0 and the base case is hit.
    return n * factorial(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}