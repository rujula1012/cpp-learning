#include <bits/stdc++.h>
using namespace std;

void sets(int n)
{
    set<int> st;
    cout << "\nEnter the ids of student:";
    for (int i = 0; i < n; i++)
    {
        int id;
        cin >> id;
        st.insert(id);
    }
    cout << "\nUnique student ids:";
    for (auto p : st)
    {
        cout << p << " ";
    }
    cout << "\nTotal unique ids:" << st.size();
    int x;
    cout << "\nEnter a id:";
    cin >> x;
    if (st.find(x) != st.end())
        cout << x << " is registered" << endl;
    else
        cout << x << " is not registered\n";

    auto lb = st.lower_bound(x);
    if (lb != st.end())
        cout << "lower bound :" << *lb << endl;
    else
        cout << "lower bound not found";

    auto ub = st.upper_bound(x);
    if (ub != st.end())
        cout << "upper bound :" << *ub << endl;
    else
        cout << "upper bound not found";
}

int main()
{
    int n;
    cout << "Enter the number of students:";
    cin >> n;
    sets(n);
    return 0;
}