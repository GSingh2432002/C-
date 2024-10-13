// Approach 1:- Naive Approach
// As we know fib(i) = fib(i-1) + fib(i-2). Simply iterate and go on calculating the ith term in the series.
// Step 1:- Take an array say fib of size n+1. The 0th term and 1st term are 0 and 1 respectively. So fib(0)=0 and fib(1)=1.
// Step 2:- Now iterate from 2 to n and calculate fib(n).fib(n) = fib(n-1) + fib(n-2)
// Step 3:- Then print fib(0) + fib(1) + ..... fib(n)
#include<bits/stdc++.h>
using namespace std;

int main(){
    // An integer variable n is initialized to 5. This variable holds the number of terms for which the Fibonacci sequence will be calculated.
    int n = 5;

    // This block checks the value fo n and handles the cases where n is 0 or 1.
    if(n == 0){
        // The program prints 0 becoz the Fibonacci sequence starts with 0.
        cout << 0;
    }else if(n == 1){
        // If n == 1, it prints 0 1, the first two term of the fibonacci series.
        cout << 0 << " " << 1 << "\n";

    // The program moves into the else block if n > 1
    }else{
        // An array fib of size n+1 is declared. This array will store the Fibonacci numbers.
        int fib[n+1];
        
        // The first two elements of Fibonacci series are initialized: fib[0]: 0 and fib[1]: 1.
        fib[0] = 0;
        fib[1] = 1;

        // A loop is started from i=2 to i=n. It computes the Fibonacci series using the formula.
            // fib[i] = fib[i-1] + fib[i-2]
        for(int i=2; i<= n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }

        // This part prints the Fibonacci series. Then another loop runs from i=0 to i=n, printing all the Fibonacci numbers stored in the fib array.
        cout<<"The fibonacci series up to "<< n << "th term:"<< endl;
        for(int i=0; i<=n; i++){
            cout << fib[i] << " ";
        }
    }
}

// Approach 2:- We are going to print the Nth Fibonacci number using functional recursion with multiple recursion with multiple function calls.
// Step 1:- Similar to all the recursion problems we've seen before, we need a base case in this problem too in order for recursion to not go infinitely. Here, we notice that the Fibonacci series start from N = 1, where we initialize its value as 1.
// Step 2:- Assume Fibonacci(0) = 0. So, Fibonacci(2) = 1+0 = 1 as the Nth Fibonacci number is the sum of the previous two Fibonacci numbers.
// Step3:- Similarly, we call Fibonacci(N-1) and Fibonacci(N-2) and return their sum. Both the function calls Fibonacci(N-1) and Fibonacci(N-2) would be computed individually one by one until the base condition is reached for both and then they return back to the main function. 
#include<bits/stdc++.h>
using namespace std;

// This function fibonacci takes an integer n as a parameter and returns the nth Fibonacci number using recursion.
int fibonacci(int n){

    // The base case of the recursion function:
        // If n<=1 the function returns n directly. This is because the Fibonacci sequence first two numbers are 0 and 1. i.e fibonacci(0) will return 0, and fibonacci(1) will return 1.
    if(n<=1){
        return n;
    }

    // These two lines perform the recursive calls:
        // last = fibonacci(n-1): This call computes the Fibonacci number for n-1.
        // slast = fibonacci(n-2): This call computes the Fibonacci number for n-2.
    // These recursive calls continue until the base case is met.
    int last = fibonacci(n-1);
    int slast = fibonacci(n-2);

    // This line returns the sum of the results from the previous two recursive calls. This is the core logic of the Fibonacci sequence: each number is the sum of the previous two numbers.
    return last + slast;
}

// The main function begins execution:
    // An integer n is initialized with the value 4.
    // The fibonacci function is called with n=4, which computes and returns the 4th Fibonacci number.
    // The result of the function is printed to the console using cout.
    // Finally, the program ends with return 0, signaling successful execution.
int main(){
    int n = 4;
    cout << fibonacci(n) << endl;
    return 0;
}