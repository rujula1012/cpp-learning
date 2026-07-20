#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{

    if (n == 0)
        return 0;

    return n + sum(n - 1);
}
int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin >> n;
    int result = sum(n);
    cout << result << endl;
    int result1 = fact(n);
    cout << result1;
}