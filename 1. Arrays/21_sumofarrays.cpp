#include<iostream>
#include<cmath>

using namespace std;

int main() {
    //enter the number of digits in first number
    int n;
    cin>>n;
    //enter the first number
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    //enter the number of digits in second number
    int m;
    cin>>m;
    //enter the second number
    int b[m];
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    
    //convert the first array into an integer
    int ai = 0;
    for (int i = n-1; i >= 0; i--)
    {
        ai = ai + ( a[i] * pow(10,n-i-1) );
    }
    
    //convert the second array into an integer
    int bi = 0;
    for (int i = m-1; i >=0; i--)
    {
        bi = bi + ( b[i] * pow(10,m-i-1) );
    }

    //find the result in integer
    int result = ai + bi;

    //convert it back into an array
    int o = max(n,m);
    int c[o];
    for (int i = 0; i < o; i++)
    {
        c[n-i-1] = result%10;
        result = result / 10;
    }
    //print the array
    for (int i = 0; i < o; i++)
    {
        cout<<c[i]<<", ";
    }
    
    
    
    return 0;
}