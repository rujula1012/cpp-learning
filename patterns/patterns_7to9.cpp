#include <iostream>
using namespace std;

void pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }
        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     cout << " ";
        // }
        cout << "\n";
    }
}


void pattern8(int n)
{
    for (int i = n-1; i >=0; i--)
    {
        for (int j = 0; j < n - i-1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {

            cout << "*";
        }
        // for (int j = 0; j < n - i - 1; j++)
        // {
        //     cout << " ";
        // }
        cout << "\n";
    }
}

void pattern9(int n)
{
    for (int i = 1; i<=2*n-1; i++)
    {   int stars =i;
        if(i>n) stars=2*n-i;
        for (int j = 1; j <=stars; j++)
        {

            cout << "*";
        }
        cout << "\n";
    }
}


int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    cout << "\n Pattern 7\n";
    pattern7(n);
    cout << "\n Pattern 8\n";
    pattern8(n);
    cout << "\n Pattern 9\n";
    pattern9(n);
    

}