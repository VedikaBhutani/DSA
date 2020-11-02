#include<iostream>

using namespace std;

int main() {
    //enter the number of elements
    int n;
    cin>>n;

    //enter the array(already sorted)
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //enter the key
    int k;
    cin>>k;

    //start of the array
    int i=0;
    //end of the array
    int j=n-1;

    //current sum
    int curSum = 0;

    //loop condition
    while (i < j)
    {   
        curSum = a[i] + a[j];

        //cur sum is more than required so we bring the sum down by reducing j
        if ( curSum > k )
        {
            j--;
        }
        
        //cur sum is less than required so we bring the sum up by increasing i
        if ( curSum < k )
        {
            i++;
        }

        //in this case its a match and we iterate both the variables
        if ( curSum == k )
        {
            cout<<a[i]<<" & "<<a[j]<<endl;
            i++;
            j--;
        }
        
    }
    
    return 0;
}