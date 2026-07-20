#include <bits/stdc++.h>
using namespace std;

void printnumbers1(int i, int n)
{
    if (i > n)
        return;
    cout << i << endl;
    printnumbers1(i + 1, n);
}

void printnumbers2(int n)
{
    if (n == 0)
        return;

    printnumbers2(n - 1);
    cout << n << endl;
}
void printnumbers3(int i, int n)
{
    if (i < 1)
        return;
    cout << i << endl;
    printnumbers3(i - 1, n);
}

void printnumbers4(int n)
{  
    if (n == 0)
        return;
    cout << n << endl;
    printnumbers4(n - 1);
}

int main()
{
    int n;
    cout << "Enter a number to print numbers from 1 to n:";
    cin >> n;
    printnumbers1(1, n);
    printnumbers2(n);
    printnumbers3(n, n);
    printnumbers4(n);
}