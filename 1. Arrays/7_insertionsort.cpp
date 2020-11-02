#include<iostream>

using namespace std;

int main() {
    //enter the number of elements
    int n;
    cin>>n;

    //enter the array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    //insertion sort
    //insert the current element at the "right" position
    //iterates over the entire array
    for (int i = 1; i < n; i++)
    {
        //current element so that we don't lose track of it
        int e = a[i];
        //end of the unsorted array
        int j = i-1;

        while (j >= 0 and a[j] > e)
        {
            a[j+1] = a[j];
            j--;
        }

        //place e at the then "right" place
        a[j+1] = e;
        
    }
    
    //output
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<", ";
    }

    return 0;
}