#include<iostream>

using namespace std;

int binarySearch(int a[], int n, int k) {
    int s=0;
    int e=n-1;
    while (s <= e)
    {
        int mid = (s+e)/2;

        if (a[mid] == k)
        {
            return mid;
        }

        if (a[mid] > k)
        {
            e = mid - 1;
        }

        if (a[mid] < k)
        {
            s = mid + 1;
        }
    }
    return -1;
    
    
}

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


    cout<<k<<" is present at " << binarySearch(a, n, k) + 1 << "th position.";

    return 0;
}