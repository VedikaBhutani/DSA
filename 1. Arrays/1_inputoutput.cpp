#include<iostream>

using namespace std;

int main () {
    //Enter the number of elements of the array
    int n;
    cin>>n;

    int a[n];

    //Input the elements
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    //output the elements
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}