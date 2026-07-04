#include <iostream>
using namespace std;

void pattern1() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern2() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

void pattern3() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << "\n";
    }
}

void pattern4() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << "\n";
    }
}

void pattern5() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern6() {
    for (int i = 0; i < 5; i++) {
        for (int j = 1; j <= 5 - i; j++) {
            cout << j;
        }
        cout << "\n";
    }
}

int main() {
    cout << "Pattern 1:\n";
    pattern1();

    cout << "\nPattern 2:\n";
    pattern2();

    cout << "\nPattern 3:\n";
    pattern3();

    cout << "\nPattern 4:\n";
    pattern4();

    cout << "\nPattern 5:\n";
    pattern5();

    cout << "\nPattern 6:\n";
    pattern6();

    return 0;
}