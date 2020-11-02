#include <iostream>

using namespace std;

int main() {
    //enter the number of elements
    int n;
    cin>>n;

    int a[n];

    //input the array
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //set the variable to the upper and lower bounds
    int min = INT16_MAX;
    int max = INT16_MIN;

    //update the min and max 
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
        
        if (a[i] < min)
        {
            min = a[i];
        }
        
    }

    //output
    cout<<"Max and min are "<<max<<" & "<<min<<" respectively."<<endl;
    
    return 0;
}