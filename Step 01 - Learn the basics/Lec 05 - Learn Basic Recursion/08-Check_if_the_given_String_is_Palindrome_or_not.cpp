// Recursive Approach:-
// Step 1:- In this approach, we check the string using functional recursion where firstly, the letter on the two ends of the string(start,end) are compared to see if they're the same or not.
// Step 2:- If they're the same then we simply call recursion for the next elemets(start+1, end-1) and so on until the start becomes greater than or equal to the end.
// Step 3:- If at any point the start and the end differ, we return false stating that the string is not a palindrome.
// Step 4:- Otherwise, if the base condition is reached, then the string is obviously a palindrome and we return true.
#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &s){
    // Base condition
    // If i exceeds half of the string means all the elements are compared, we return true.
    if(i>= s.length()/2) return true;

    // If the start is not equal to the end, not the palindrome
    if(s[i] != s[s.length()-i-1]) return false;

    // If both characters are the same, increment i and check start+1 and end-1
    return palindrome(i+1,s);
}

int main(){
    string s = "madam";
    cout << palindrome(0,s);
    cout<< endl;
    return 0;
}