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
    
    int cA[n];
    cA[0] = a[0];
    
    for (int i = 1; i < n; i++)
    {
        cA[i] = cA[i-1] + a[i];
    }

    int maxSum = 0;
    int curSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            curSum = cA[j] - cA[i];
        }

        if (curSum > maxSum)
        {
            maxSum = curSum;
        }
    }

    cout<< maxSum;
    
    
    return 0;
}