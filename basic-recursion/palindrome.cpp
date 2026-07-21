#include <bits/stdc++.h>
using namespace std;

bool helper(string s, int l,int r)
{
    if(l>=r/2)
    return true;

    if(!isalnum(s[l]))
    return helper(s,l+1,r);

    if(!isalnum(s[r]))
    return helper(s,l,r-1);

    if(tolower(s[l])!=tolower(s[r]))
    return false;

    return helper(s,l+1,r-1);
}

bool isPalindrome(string s)
{
    return helper(s, 0,s.size()-1);
}

int main()
{
    string s;
    cout << "Enter the string:";
    cin >> s;
    bool result = isPalindrome(s);
    cout << boolalpha << result;
}