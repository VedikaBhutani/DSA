#include<iostream>

using namespace std;

//function to calculate median of a sorted array
int median(int a[], int n) {
    if (n % 2 ==0)
    {
        return( a[n/2] + a[n/2 - 1] ) / 2;
    }else
    {
        return a[n/2];
    }
}

//function to calculate the median of two sorted arrays of equal length
int getMedian(int a[], int b[], int n) {
    //invalid input
    if (n <= 0)
    {
        return -1;
    }

    //single element in both the arrays
    if (n ==1)
    {
        return (a[0] + b[0])/2;
    }

    //end case
    if (n ==2) 
    {
        return (max(a[0], b[0]) + min(a[1], b[1]))/2;
    }

    //median of the first array
    int m1 = median(a,n);

    //median of second array
    int m2 = median(b,n);

    //if both the medians are equal then the answer will also be same
    if(m1 == m2)
    {
        return m1;
    }

    //if the median of the first array is less than the second array
    if (m1 < m2)
    {   
        if (n%2 == 0)
        {
            return getMedian(a+n/2-1, b, n-n/2+1);
        } else
        {
            return getMedian(a+n/2, b, n-n/2);
        }   
    } else //if the median of the second array is less than the first array
    {
        if (n%2 == 0)
        {
            return getMedian(b+n/2-1, a, n-n/2+1);
        }else
        {
            return getMedian(b+n/2, a, n-n/2);
        }    
    }  
}


int main() {
    //enter the number of elements
    int n;
    cin>>n;

    //enter both the arrays
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }

    //function call to print the result
    cout<<getMedian(a, b, n);
    
    
    return 0;
}