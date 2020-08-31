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

    int k;
    cin>>k;

    int i=0;
    int j=n-1;

    int curSum = 0;

    while (i < j)
    {
        curSum = a[i] + a[j];

        if ( curSum > k )
        {
            j--;
        }
        
        if ( curSum < k )
        {
            i++;
        }

        if ( curSum == k )
        {
            cout<<a[i]<<" & "<<a[j]<<endl;
            i++;
            j--;
        }
        
    }
    
    return 0;
}