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
    
    //sort snippet
        //unsorted array loop
    for (int i = 0; i < n; i++)
    {   
        //find the min element in unsorted array and place it at the start
        for (int j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                swap(a[i],a[j]);
            }
            
        }
        
    }
    
    //output
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<", ";
    }

    return 0;
}