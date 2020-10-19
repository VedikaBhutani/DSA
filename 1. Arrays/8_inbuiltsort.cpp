#include<iostream>
//sort function header file
#include<algorithm>

using namespace std;

//for descending order
bool compare (int a, int b) {
    return a > b;
}

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

    //sort function
    //it can take a third argument which is a compare function for ascending and descending order
    sort(a,a+n);
    
    //output
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<", ";
    }

    return 0;
}