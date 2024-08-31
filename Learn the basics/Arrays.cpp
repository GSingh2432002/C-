#include<bits/stdc++.h>
using namespace std;
int main(){
    // 1D array
        int arr[5];
        cin>>arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        arr[3] += 9;
        cout<<arr[3];

    // 2D array
        int arr1[3][5];
        arr1[1][3] = 78;
        cout<<arr1[2][3];
        return 0;    

    // String
        string s = "Striver";
        int len = s.size();
        s[len-1] = 'z';
        cout<<s[len-1]; // to print the changed char of the given length
        cout<<s[2]; // to print the char at the given index
        return 0;
}