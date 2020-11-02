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
    
    //bubble sort
        
    for (int i = 1; i < n; i++)
    {   
        //at the end of every loop ith biggest number will be at the end
        for (int j = 0; j <= n-i; j++)
        {
            if (a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<", ";
    }

    return 0;
}