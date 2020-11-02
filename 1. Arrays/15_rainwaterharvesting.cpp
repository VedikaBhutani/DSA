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

    //initialize start and end point
    int l = 0;
    int h = n - 1;

    //initialize the left and right max
    int lmax = 0;
    int rmax = 0;

    //result storing variable
    int water = 0;

    //basic condition for the loop
    while (l <= h)
    {   
        if (a[l] < a[h]) // we need to look at the left side because this position will probably store water
        {   
            //if this condition is true then water won't be stored but it will become the new lmax
            if (a[l] > lmax)
            {
                lmax = a[l];
            }
            //the water will be stored at this position
            else 
            {
                water = water + lmax - a[l];
            }
            l++;
        } else
        {
            //if this condition is true then water won't be stored but it will become the new rmax
            if (a[h] > rmax)
            {
                rmax = a[h];
            } else
            {
                //water will be stored at this position
                water = water + rmax - a[h];
            }
            h++;
        }
    }

    cout<< water;
    
    
    return 0;
}