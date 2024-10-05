// Includes all standard C++ library headers.
#include<bits/stdc++.h>

// Allows the use of names from std namespace without having to prefix them with std::
using namespace std;

// Definition of the function print which takes an integer parameter count. The function return void, meaning it does not return any value.
void print(int count){
    // This is the base condition for recursion. If the value of count is equal to 4 the function stops executing by returning and this terminates the recursion.
    if(count == 4) {
        return;
    }

    // This lines prints the current value of count to the console, followed by newline. This happens in each recursive call until count reaches 4.
    cout<< count << endl;
    
    // This increments the value of count by 1. It ensures that count moves towards the base condition and the recursion will eventuallhy terminate.
    count++;

    // This is the recursive call to the print function, where the incremented value of count is passed as an argument. The function keeps calling itself until count equals 4, at which point the recursion stops.
    print(count);
}

// Start of the main function, which is the entry point for the program.
int main(){
    // The print function is called with an initial value of 0 for count.
    print(0);

    // This indicates the successful termination of the main function. Returning 0 typically means that the program ended without any errors.
    return 0;
}
