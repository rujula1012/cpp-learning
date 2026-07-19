#include<bits/stdc++.h>
using namespace std;

int gcd1(int n1,int n2) //brute force
{   int gcd=0;
    for(int i=1;i<=min(n1,n2);i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;
        }
    }
  return gcd;
}

int gcd2(int n1,int n2)  //euclidean algorithm
{ while(n1>0 && n2>0)
    {
        if(n1>n2) n1=n1%n2;
        else n2=n2%n1;
    }
    if(n1==0) return n2;
    else return n1;

}

int main()
{
    int n1,n2;
    cout<<"Enter the numbers:";
    cin>>n1>>n2;
    int result1=gcd1(n1,n2);
    cout<<result1<<endl;
    int result2=gcd2(n1,n2);
    cout<<result2;
}