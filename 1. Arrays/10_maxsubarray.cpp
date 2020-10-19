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
    int cSum = 0;

    //maximum sum
    int mSum = 0;

    //i = start of the subarray
    for (int i = 0; i < n; i++)
    {
        //j = end of the subarray
        for (int j = i; j < n; j++)
        {   //current sum initialized to 0
            cSum=0;
            //subarray from i to j
            for (int k = i; k <= j; k++)
            {
                cSum = cSum + a[k];
            }

            if (cSum > mSum)
            {
                mSum = cSum;
            }
        }
        
    }
    cout<<mSum;
    
    return 0;
}