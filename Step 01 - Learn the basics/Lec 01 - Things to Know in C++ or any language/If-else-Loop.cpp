// Write a program that takes an input of age and print if you are adult or not
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int age;
        cin>>age;
        if(age >= 18){
            cout<<"You are an adult";
        }
        else if(age<18){
            cout<<"You are not an adult";
        }
        return 0;
    }

// Write a program to ask user to enter marks and print the corresponding grade
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int marks;
        cin>>marks;
        if(marks <= 25){
            cout << "F";
        }
        else if(marks <= 44){
            cout << "E";
        }
        else if(marks <= 49){
            cout << "D";
        }
        else if(marks <= 59){
            cout << "C";
        }
        else if(marks <= 79){
            cout << "D";
        }
        else if(marks <= 100){
            cout << "A";
        }
        return 0;
    }

// Write a program that take the age from the user and then decide accordingly.
    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int age;
        cin>>age;
        if(age < 18){
            cout<<"Not eligible for job";
        }
        // here, i have used nested loop for less code and doing more things at the same time
        else if(age <= 57){
            cout<<"Eligible for job";
            if(age >= 55){
                cout<< ", but retirement soon";
            }
        }
        else{
            cout<<"Retirement time";
        }
        return 0;
    }
