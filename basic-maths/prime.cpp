#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{   int cnt=0;
    if (n <= 1)
        return false;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
          { cnt++;
           if((n/i)!=i)
           cnt++;}
    }
    if(cnt==2)
    return true;
    else return false;
}
int main()
{
    int n;
    cout << "Enter the number:" << endl;
    cin >> n;
    bool result = isprime(n);
    cout << boolalpha << result;
    return 0;
}
