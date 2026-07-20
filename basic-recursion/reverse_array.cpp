#include <bits/stdc++.h>
using namespace std;

void helper(int a[], int l, int r) //method 1 two pointer
{
    if (l >= r)
        return;

    swap(a[l], a[r]);
    helper(a, l + 1, r - 1);
}
void reverse(int a[], int n)
{

    helper(a, 0, n - 1);
}

void reverse2(int a[],int n,int i) //method 2 single pointer
{
    if(i>=n/2)
    return;

    swap(a[i],a[n-1-i]);
    reverse2(a,n,i+1);
}


int main()
{
    int n;
    cout << "Enter the number of elements to store in array" << endl;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    reverse(a, n);
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]";
    reverse2(a,n,0);
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]";
}