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
    
    //brute force
    //i = start of the subarray
    for (int i = 0; i < n; i++)
    {   
        //j = end of the subarray
        for (int j = i; j < n; j++)
        {
            //k =  iterator from i to j
            for (int k = i; k <= j; k++)
            {
                cout<<a[k]<<", ";
            }
            //line break after each subarray
            cout<<endl;
        }
        
    }
    
    
    
    return 0;
}