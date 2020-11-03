#include<iostream>
#include<cmath>

using namespace std;

int main() {
    //enter the number
    int x;
    cin>>x;

    // convert the number to an array of digits
    int a[20] = {0};
    int i = 0;
    while(x){
        a[i++] = x % 10;
        x = x / 10;
    }
    
    //invert only those digits which will decrease after inversion ie. the ones greater than 5
    for (int i = 0; i < 20; i++)
    {
        if(a[i]>4) {
            a[i] = 9 - a[i];
        }
    }

    //print the result
    for (int i = 19; i >= 0; i--)
    {
        if(a[i]!=0) {
            cout<<a[i];
        }
    }
    
    return 0;
}