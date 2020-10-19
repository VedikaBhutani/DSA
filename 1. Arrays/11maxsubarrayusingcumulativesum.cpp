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
    
    //cumulative sum array initialization
    int cA[n];
    cA[0] = a[0];
    
    //cumulative sum array formation
    for (int i = 1; i < n; i++)
    {
        cA[i] = cA[i-1] + a[i];
    }

    //max sum intialization
    int maxSum = 0;
    //current sum intialization
    int curSum = 0;

    //i = start of the subarray
    for (int i = 0; i < n; i++)
    {
        //j = end of the subarray
        for (int j = i; j < n; j++)
        {   
            //sum of the subarray = difference between the elements of the cumulative sum array
            curSum = cA[j] - cA[i];
        }

        //max sum updation
        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
    }

    //output
    cout<< maxSum;
    
    
    return 0;
}