// Approach 1:- Using Loop

    #include<bits/stdc++.h>
    using namespace std;

    // This represents the number up to which the sum of integers will be calculated.
    void solve(int n){
        // A variable sum of type int is declared and initialized to 0. This variable will store the cumulative sum of integers from 1 to n.
        int sum = 0;

        // This is the start of a for loop. The loop will iterate n times, from i=1 to i=n. In each iteration, the current value of i will be added to the sum.
        for(int i=1; i<= n; i++){

            // In each iteration of the loop, the current value of i is added to sum. The sum variable accumulates the total sum of all numbers from 1 to n.
            sum = sum + i;
        }
        // After the loop finishes, this line prints the result. It outputs a message to the console, displaying the value of n and the calculated sum.
        cout << "The sum of first " << n << " number is: " << sum << endl;
    }

    int main(){
        int n;
        cin >> n;
        solve(n);
    }


// Approach 2:- Using Recursion way in that using parameterized way
// In this approach, instead of using a global variable for calculating the sum, we pass the sum in the parameters of the function each time we add an integer to it during the function call. The sum gets incremented by an ith integer and i get decremented by 1 in each function call. At the end when i becomes less than 1, we simply return the calculated sum until that point.

#include<bits/stdc++.h>
using namespace std;

// int i: This represents the current number in the sequence, starting from n and decreasing with each recursive call
void func(int i, int sum){
    // This is the base condition for the recursion. It checks if i has become less than 1. When this condition is met, the recursion stop.
    if(i<1){
        // This line prints the current value of sum to console, followed by a newline. It is executed only when the base condition is true, meaning the recursion has finished summing all the numbers.
        cout << sum << endl;

        // This statement terminates the function's execution. Once i becomes less than 1, this ensures the function does not make any more recursive calls and stops.
        return;
    }

    // i-1: The value of i is decremented by 1 in each recursive call, so it eventually reaches 0, which triggers the base condition & sum+i: The current value of i is added to sum, accumulating the total sum as the recursion proceeds.
    func(i-1, sum+i);
}

// This is the main function, the entry point of the program. C++ program starts executing from the main function.
int main(){
    // Variable n of type int is declared. This variable will hold the value input by the user.
    int n;

    // This line takes input from the user and stores it in the variable n. The user provides the value up to which the numbers will be summed.
    cin>>n;

    // i=n: The value input by the user, which will be the starting value of i. & sum=0: The initial value of sum, which will accumulate the sum of numbers from n down to 1.
    func(n,0);

    // This signifies the successful completion of the main function. Returning 0 typically indicates that the program has executed without errors.
    return 0;
}

// Approach 2:- Using Recursion way in that using Functional way
// The Sum of N natural numbers would just be the Nth integer added to the Sum of (N-1) natural numbers. The base case can be visualized as if n decreases to 0, then we return 0 because the sum of 0 natural numbers is 0 only. Here, we've just broken the problem into 2 subparts and the answers of both these subparts would be added and stored in the Sum(n) function which would then be printed at last.
#include<bits/stdc++.h>
using namespace std;

// This line defines a function "func1" that takes an integer n as an argument. The function will return an integer value.
int func1(int n){
    // This is the base condition of the recursive function. If n equals 0, the function returns 0 and stops further recursion. This prevents the recursion from continuing indefinitely.
    if(n == 0){
        return 0;
    }

    // This line is where the recursion happens. The function calls itself with the argument n-1 and adds the value of n to the result of that recursive call. This process continues until n reaches 0.
    return n + func1(n-1);
}

// This is the main function where the execution of the program begins
int main(){
    // The program reads an integer n from the user input using cin
    int n;
    cin>>n;

    // This line calls the "func1" function with the input n and prints the results using cout
    cout<<func1(n)<<endl;

    // The main function returns 0, indicating successful program execution
    return 0;
}
