#include<iostream>

using namespace std;

int binarySearch(int a[], int n, int k) {
    //start of the search space
    int s=0;
    //end of the search space
    int e=n-1;
    
    while (s <= e)
    {
        //mid point to divide the array into two parts
        int mid = (s+e)/2;

        //match
        if (a[mid] == k)
        {
            return mid;
        }

        //element present in first half
        if (a[mid] > k)
        {
            e = mid - 1;
        }

        //element present in second half
        if (a[mid] < k)
        {
            s = mid + 1;
        }
    }
    return -1;
    
    
}

int main() {
    //enter the number of elements
    int n;
    cin>>n;

    int a[n];

    //enter the array
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    //enter the key
    int k;
    cin>>k;


    cout<<k<<" is present at " << binarySearch(a, n, k) + 1 << "th position.";

    return 0;
}