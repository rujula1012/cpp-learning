#include<iostream>
using namespace std;


void pattern10(int n)
{  int start=1;
   for (int i=1;i<=5;i++)
   {
   if(i%2!=0) start=1;
   else 
     start=0;
    for (int j=1;j<=i;j++)
    {
        cout<<start;
        start=1-start;
    }
    cout<<endl;
   }
}

void pattern11(int n)
{  
   for (int i=1;i<=n;i++)
   {
    for(int j=1;j<=i;j++)
    {
      cout<<j;
    }
    for(int j=1;j<=2*(n-i);j++)
    {
        cout<<" ";
    }
    for(int j=i;j>=1;j--)
    {
      cout<<j;
    }
    cout<<endl;
   }
}

void pattern12(int n)
{   int count=0;
  for (int i=1;i<=n;i++)
   {
    for(int j=1;j<=i;j++)
    {
      count++;
      cout<<count<<" ";
    }
    cout<<endl;
}
}

void pattern13(int n)
{
  for (int i=0;i<n;i++)
  {
    for (char ch='A';ch<='A'+i;ch++)
    {
       cout<<ch;
    }
    cout<<endl;
  }
}

void pattern14(int n)
{
   for (int i=0;i<n;i++)
  {
    for (char ch='A';ch<='A'+n-i-1;ch++)
    {
       cout<<ch;
    }
    cout<<endl;
  } 
}

void pattern15(int n)
{
   for (int i=0;i<n;i++)
  {
    char ch='A'+i;
    for (int j=0;j<=i;j++)
    {
       cout<<ch;
    }
    cout<<endl;
  }
  
}

int main()
{   int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<"\nPattern 10\n";
    pattern10(n);
    cout<<"\nPattern 11\n";
    pattern11(n);
    cout<<"\nPattern 12\n";
    pattern12(n);
    cout<<"\nPattern 13\n";
    pattern13(n);
    cout<<"\nPattern 14\n";
    pattern14(n);
    cout<<"\nPattern 15\n";
    pattern15(n);
}
