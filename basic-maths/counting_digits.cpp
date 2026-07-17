#include<bits/stdc++.h>
using namespace std;
void count_digit1(int n)
{
    int count =0;
    while (n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"the number of digits are: "<<count<<endl;
}

void count_digit2(int n)
{
    int count=(int)(log10(n)+1);
    cout<<"the number of digits are: "<<count<<endl;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    count_digit1(n);
    count_digit2(n);
    return 0;
}

  