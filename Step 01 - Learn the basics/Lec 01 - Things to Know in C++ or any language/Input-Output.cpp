// The below line of code show how to print the content in a same line or in a different line
    // #include<bits/stdc++.h> // To import all library of C++
    #include<iostream> // To take input or to print an output we use iostream
    using namespace std;

    int main(){
            cout << "Hey Striver!" << endl << "Hey Gaurav" << endl;
            cout << "Hey Raj";
            int x,y;
            cin >> x >> y;
            cout << "Value of x: " << x << " and y: " << y;
            return 0;
    }

// Taking variable as a input
    #include<bits/stdc++.h>
    using namespace std;

    int main(){
        // int, long, double, float, long long
            // string only print first word after space
                string s1;
                string s2;
                cin>>s1>>s2;
                cout<<s1<<" "<<s2;
                return 0;
            // getline used to print the whole line at a time
                string str;
                getline(cin, str);
                cout << str;
                return 0;
            // char is used to store all char
                char ch = 'a';
                cout<<ch;
                return 0; 
    }
