#include <iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int min = INT16_MAX;
    int max = INT16_MIN;

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

    cout<<"Max and min are "<<max<<" & "<<min<<" respectively."<<endl;
    
    return 0;
}