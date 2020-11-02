#include<iostream>

using namespace std;

int main () {
    //enter the number of elements
    int n;
    cin>>n;

    int a[n];

    //enter a sorted array
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //enter the key
    int key;
    cin>>key;

    //additional loop to the sum pair problem for the extra element
    for (int i = 0; i < n; i++)
    {
        //remaining amount
        int tsum = key - a[i];
        
        //start of the search space
        int j = i + 1;
        //end of the search space
        int k = n - 1;

        //pair sum implementation with target sum = tsum and search space everything after i
        while (j < k)
        {
            //current sum = csum
            int csum = a[j] + a[k];
            if (csum > tsum)
            {
                k--;
            }
            if (csum < tsum)
            {
                j++;
            }
            if (csum == tsum)
            {
                //output
                cout<<a[i]<<", "<<a[j]<<" and "<<a[k];
                j++;
                k--;
            }        
        }
    }

    return 0;
}