#include<bits/stdc++.h>
using namespace std;

int reverse_num(int n)
{   int last_digit,rev_num=0;
    while(n>0)
    {
        last_digit=n%10;
        n=n/10;
        rev_num=rev_num*10+last_digit;
        if(rev_num>INT_MAX/10||rev_num<INT_MIN/10) return 0;
    }
    return rev_num;
}



int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<reverse_num(n);
    return 0;
}