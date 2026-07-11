#include <bits/stdc++.h>
using namespace std;

void multisetDemo(int n)
{
    // Create multiset
    multiset<int> ms;

    // Input marks
    cout << "Enter the marks:\n";
    for (int i = 0; i < n; i++)
    {
        int marks;
        cin >> marks;
        ms.insert(marks);
    }

    // Display marks
    cout << "\nMarks: ";
    for (int mark : ms)
    {
        cout << mark << " ";
    }
    cout << endl;

    // Count occurrences
    int x;
    cout << "\nEnter a mark to search: ";
    cin >> x;

    cout << x << " was scored by "
         << ms.count(x) << " student(s)." << endl;

    // Find and remove one occurrence
    int y;
    cout << "\nEnter a mark to remove one occurrence: ";
    cin >> y;

    auto it = ms.find(y);

    if (it != ms.end())
    {
        cout << y << " exists.\n";

        ms.erase(it);

        cout << "After removing one occurrence: ";
        for (int mark : ms)
        {
            cout << mark << " ";
        }
        cout << endl;
    }
    else
    {
        cout << y << " does not exist.\n";
    }

    // Remove all occurrences
    cout << "\nRemoving all occurrences of " << y << "...\n";
    ms.erase(y);

    cout << "After removing all occurrences: ";
    for (int mark : ms)
    {
        cout << mark << " ";
    }
    cout << endl;

    // Lowest and highest marks
    if (!ms.empty())
    {
        cout << "\nLowest marks : " << *ms.begin() << endl;
        cout << "Highest marks: " << *ms.rbegin() << endl;
    }
    else
    {
        cout << "\nMultiset is empty.\n";
    }

    // Size
    cout << "Total students: " << ms.size() << endl;
}

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    cout << endl;
    multisetDemo(n);
    return 0;
}

