#include<iostream>

using namespace std;

int main() {
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int curSum = 0;
    int maxSum = 0;

    for (int i = 0; i < n; i++)
    {
        curSum = curSum + a[i];

        if ( curSum < 0 )
        {
            curSum = 0;
        }

        if ( curSum > maxSum )
        {
            maxSum = curSum;
        }
        
    }

    cout<<"The maximum subarray sum is :"<<maxSum<<endl;     

    return 0;
}