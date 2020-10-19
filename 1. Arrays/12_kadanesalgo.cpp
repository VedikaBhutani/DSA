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

    //current sum
    int curSum = 0;
    //max sum
    int maxSum = 0;

    //iterate over the array
    for (int i = 0; i < n; i++)
    {   
        //add every element to the current sum
        curSum = curSum + a[i];

        //whenever the current sum goes below 0 update it to 0
        if ( curSum < 0 )
        {
            curSum = 0;
        }

        //max sum update
        if ( curSum > maxSum )
        {
            maxSum = curSum;
        }
        
    }

    //output
    cout<<"The maximum subarray sum is :"<<maxSum<<endl;     

    return 0;
}