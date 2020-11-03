#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

//custom comparator which return the lexicologically greater number. eg- 9>888888
int myCompare(int x, int y) {
    string xy = to_string(x) + to_string(y);
    string yx = to_string(y) + to_string(x);
    int a = stoi(xy);
    int b = stoi(yx);
    return (a > b) ? x : y;

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
    
    //sort the array using our comparator
    sort(a, a+n, myCompare);

    //print the resulting array without any space to get the result
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    

    
    return 0;
}