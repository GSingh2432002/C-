#include<bits/stdc++.h>
using namespace std;
void print(int n) {

int size = 2*n-1;

    int start =0;

    int end = size-1;

    int arr[size][size];

    while(n!=0){

    for(int i=start; i<=end; i++)

    {

        for(int j=start; j<=end; j++)

        {

            if(i==start || i==end || j==start || j==end)

            {

                arr[i][j]=n;

            }

        }

    }

            start++;

            end--;

            n--;

    }

    for(int i=0; i<size; i++)

    {

        for(int j=0; j<size; j++)

        {

            cout << arr[i][j];

        }

        cout << endl;

    }

}
int main(){
    int n;
    cin>>n;
    print(n);
}