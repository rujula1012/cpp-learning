// Write a C++ program to calculate the factorial of a positive integer using a while loop.
#include <iostream>
using namespace std;

int main()
{
    int num,factorial=1;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    while (num>0)
    {
        factorial*=num;
        num--;
    }
    cout<<"factorial of the number is :"<<factorial;
    return 0;
}