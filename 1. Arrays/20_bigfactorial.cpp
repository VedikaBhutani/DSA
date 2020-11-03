#include<iostream>

using namespace std;

//maximum number of digits in the result
#define MAX 500

//function to multiply two numbers using an array
int multiply(int n, int res[], int size);

void fact(int n) {

    //array which will store digits of the result
    int res[MAX];

    //first digit
    res[0] = 1;
    //variable to measure the length of the result
    int size = 1;

    //traversing every number till the given number
    for (int x = 0; x <= n; x++)
    {
        size = multiply(x, res, size);
    }

    //print the result
    for (int i = size - 1; i >= 0; i--)
    {
        cout<<res[i];
    }
   
}

int multiply(int x, int res[], int size) {
    //variable to keep track of the carry value in multiplication
    int carry = 0;
    //multiplying each digit of the res array with the number at hand
    for (int i = 0; i < size; i++)
    {
        //result of the array
        int prod = res[i]*x + carry;

        //storing the digit of the result
        res[i] = prod % 10;

        //storing the remaining value in carry
        carry = prod/10;
    }

    //storing carry in the result array
    while (carry)
    {
        res[size] = carry%10;
        carry = carry/10;
        size++;
    }   

    return size;
}

int main() {
    //enter the number
    int n;
    cin>>n;

    //call fact to calculate factorial
    fact(n);
    
    return 0; 
}