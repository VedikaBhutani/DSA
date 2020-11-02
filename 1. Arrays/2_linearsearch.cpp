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

    //enter the key
    int k;
    cin>>k;

    //search for the key
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            cout<< k <<" is present at " << i+1 << "th position";
        }
        
    }
    
    return 0;
}