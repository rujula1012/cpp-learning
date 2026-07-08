#include <iostream>
using namespace std;

void pattern16(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch;
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }
        // for(int j=0;j<n-i-1;j++)
        // {
        //     cout<<" ";
        // }

        cout << endl;
    }
}

void pattern17(int n)
{
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'A' + n - 1 - i; ch <= 'A' + n - 1; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern18(int n)
{
    for (int i = 0; i < n; i++)
    {
        // stars
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j = n - i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // stars
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }
        // stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern19(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // stars
        for (int j = 1; j<=i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2 *(n-i); j++)
        {
            cout << " ";
        }
        // stars
        for (int j =i; j >=1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    // stars
    for (int i = 1; i <n; i++)
    {
        for (int j =1; j <=n-i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= 2*i; j++)
        {
            cout << " ";
        }
        // stars
        for (int j=1;j<=n-i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern20(int n)
{
    for (int i=0;i<n;i++)
    {
        //stars 
        for(int j=0;j<n;j++)
        {
            if(i==0||i==n-1||j==0||j==n-1)
            {
                cout<<"*";
            }
            else cout<<" ";
        }
        cout<<endl;
    }
}

void pattern21(int n)
{  
    for(int i=0;i<2*n-1;i++)
    {   
        for(int j=0;j<2*n-1;j++)
        {
         int top=i;
         int left=j;
         int right=(2*n-2)-j;
         int bottom=(2*n-2)-i;

         cout<<(n-min(min(top,bottom),min(left,right)));
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    cout << "\nPattern 16\n";
    pattern16(n);
    cout << "\nPattern 17\n";
    pattern17(n);
    cout << "\nPattern 18\n";
    pattern18(n);
    cout<<"\nPattern 19\n";
    pattern19(n);
    cout<<"\nPattern 20\n";
    pattern20(n);
    cout<<"\nPattern 21\n";
    pattern21(n);
}