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

    //construct the inc array
    //which will store the the length of the non decreasing sub array at i

    int inc[n];
    inc[0] = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i]>=a[i-1])
        {
            inc[i] = inc[i-1] + 1;
        } else
        {
            inc[i] = 1;
        }
    }

    //construct the dec array
    //which will store the length of the non increasing sub array at i
    int dec[n];
    dec[n-1] = 1;

    for (int i = n-2; i >= 0; i--)
    {
        if (a[i]>=a[i+1])
        {
            dec[i] = dec[i+1] + 1;
        } else
        {
            dec[i] = 1;
        }
    }

    
    

    //now print the max of inc[i] + dec[i] -1
    //because it represents the value needed(-1 because we counted k twice)
    int max = 0;
    for (int i = 0; i < n; i++)
    {   
        int sum = inc[i] + dec[i] - 1;
        if (sum > max)
        {
            max = sum;
        }
    }

    cout<<max;
    
    
    
    
    return 0;
}