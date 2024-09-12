// Functions:-
//    a. Functions are the set of code which performs something for you.
//    b. Functions are used to modularise code
//    c. Functions are used to increase code readability
//    d. Functions are used to use same code multiple times
//    e. void -> which does not returns anything
//    f. return
//    g. parameterised
//    h. non parameterised
    #include<bits/stdc++.h>
    using namespace std;

    // void printNewName(string function){
    //     cout<<"Hey "<< function << endl;
    // }

    // int main(){
    //     string name;
    //     cin>>name;
    //     printNewName(name);
    //     return 0;
    // }

// Take two numbers and print its sum
    // int main(){
    //     int num1, num2;
    //     cin>> num1 >> num2;
    //     int num3 = num1 + num2;
    //     cout << num3;
    //     return 0;
    // }

// Another way to print the sum of two numbers
    // int sum(int num1, int num2){
    //     int num3 = num1 + num2;
    //     return num3;
    // }
    // int main(){
    //     int num1, num2;
    //     cin >> num1 >> num2;
    //     int res = sum(num1,num2);
    //     cout<<res;
    //     return 0;
    // }

// Max,Min
    int maxx(int num1, int num2){
        if(num1 >= num2){
            return num1;
        }
        // Looking for a return line bcoz maxx() contains only if condition
    }
    int main(){
        int num1,num2;
        cin>> num1>> num2;
        int maximum = maxx(num1,num2);
        cout<<maximum;
        return 0;
    }