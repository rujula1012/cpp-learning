#include<iostream>
using namespace std;
// Question:
// Given a number n, find the sum of all digits of n using a do-while loop.
// Example:
// Input: n = 5824
// Output: 19
// Explanation: 5 + 8 + 2 + 4 = 19
int main()
{   int n,sum=0,digit;
    cout<<"Enter the number\n";
    cin>>n;
    do 
    {
        digit=n%10;
        sum+=digit;
        n=n/10; 
    }while(n>0);

cout<<"The sum is:"<<sum;
return 0;
}