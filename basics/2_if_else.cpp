#include <iostream>
using namespace std;
// Grade Calculator
int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 90)
        cout << "Grade: A";
    else if (marks >= 75)
        cout << "Grade: B";
    else if (marks >= 60)
        cout << "Grade: C";
    else if (marks >= 40)
        cout << "Grade: D";
    else
        cout << "Fail";

    return 0;
}