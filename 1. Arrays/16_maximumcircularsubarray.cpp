#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    //enter the number of elements
    int n;
    cin>>n;

    //enter the array
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //check if there is only one element
    if (n ==1)
    {
        cout<<a[0];
    }

    //calculate the sum of the array
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    //find the max and min subarray sum
    int curmax = a[0];
    int max = a[0];
    int curmin = a[0];
    int min = a[0];

    //modified kadane's algo for max and min
    for (int i = 0; i < n; i++)
    {
        curmax = std::max(curmax + a[i], a[i]);
        max = std::max(curmax, max);
        curmin = std::min(curmin + a[i], a[i]);
        min = std::min(curmin, min);
    }

    //if min = sum then return max
    if (min == sum)
    {
        cout<<max;
    }

    cout<<std::max(max, sum - min);
    
    
    
    
    
    return 0;
}