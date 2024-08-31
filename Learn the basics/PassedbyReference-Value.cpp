#include<bits/stdc++.h>
using namespace std;

// Pass by value
    // void doSomething(int num){
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    // }

    // int main(){
    //     int num = 10;
    //     doSomething(num);
    //     cout << num << endl;
    //     return 0;
    // }

// Pass by reference
    // void doOtherThings(int &num){
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    // }
    // int main(){
    //     int num = 10;
    //     doOtherThings(num);
    //     cout << num << endl;
    //     return 0;
    // }

// Pass by reference, looping and array all in one.
    void someArray(int arr[], int num){
        arr[0] += 100;
        cout << "Value inside function: " << arr[0] << endl;
    }

    int main(){
        int num = 5;
        int arr[num];
        for(int i=0; i<num; i=i+1){
            cin >> arr[i];
        }
        for(int i=0; i<=4; i=i+1){
            cout << arr[i] << endl;
        }
        someArray(arr,num);
        cout << "Value inside int main: " << arr[0] << endl;
        return 0;
    }
