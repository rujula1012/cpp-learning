#include <bits/stdc++.h>
using namespace std;

bool helper(string s, int i)
{

    if (i > s.size() / 2)
        return true;

    if (s[i] != s[s.size() - i - 1])
        return false;

    return helper(s, i + 1);
}

bool isPalindrome(string s)
{
    helper(s, 0);
}

int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    bool result = isPalindrome(s);
    cout << boolalpha << result;
}