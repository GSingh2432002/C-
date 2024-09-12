#include<bits/stdc++.h>
using namespace std;
void print(int n) {
    for(int i=0;i<n;i++)

    {

         if(i==0||i==n-1)

         {

             for(int j=0;j<n;j++)

             {

                 cout<<"*";

             }

             cout<<endl;

             continue;

         }

         cout<<"*";

         for(int j=1;j<n-1;j++)

         {

             cout<<" ";

         }

         cout<<"*";

         cout<<endl;

    }

}
int main(){
    int n;
    cin>>n;
    print(n);
}