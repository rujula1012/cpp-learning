#include<bits/stdc++.h>
using namespace std;

bool isarmstrong(int n)
{   
    int original=n,sum=0,count=0;
    count=(int)(log10(n)+1);
  while(n>0)
  {
    int last_digit=n%10;
    n=n/10;
    sum+=(int)round(pow(last_digit,count));
  }
if (sum==original)
return true ;
else return false;  
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    bool result=isarmstrong(n);
    cout<<boolalpha<<result;
    return 0;
}
