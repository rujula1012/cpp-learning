#include<bits/stdc++.h>
using namespace std;

bool palindrome(int n)
{   int rev=0;
    int x=n;
    while(n>0)
    {

   int last_digit=n%10;
   n=n/10;
   if(rev>INT_MAX/10 || rev==INT_MAX/10 && last_digit>7 ) return 0;
    rev=rev*10+last_digit;
    }
    if(rev==x)
    return true;
    else return false;
}
int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    bool result=palindrome(n);
    cout<<boolalpha<<result;
    return 0;
}
