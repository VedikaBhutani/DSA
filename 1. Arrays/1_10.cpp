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

    int cSum = 0;
    int mSum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            cSum=0;
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