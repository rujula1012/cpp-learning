#include <bits/stdc++.h>
using namespace std;

void vectors() {

// Create vector
vector<int> v;

// Add elements
v.push_back(10);
v.emplace_back(20);
v.push_back(30);

// Print vector
cout << "Vector: ";
for (int x : v) {
    cout << x << " ";
}
cout << endl;

// Size and access
cout << "Size: " << v.size() << endl;
cout << "First: " << v[0] << endl;
cout << "Safe access: " << v.at(1) << endl;
cout << "Last: " << v.back() << endl;

// Insert element
v.insert(v.begin() + 1, 15);

cout << "After insert: ";
for (int x : v) {
    cout << x << " ";
}
cout << endl;

// Iterator
vector<int>::iterator it = v.begin();
cout << "First using iterator: " << *it << endl;

// Traverse using iterator
cout << "Iterator traversal: ";
for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
}
cout << endl;

// Erase one element
v.erase(v.begin() + 1);

cout << "After erase: ";
for (int x : v) {
    cout << x << " ";
}
cout << endl;

// Erase range
v.erase(v.begin() + 1, v.begin() + 2);

cout << "After range erase: ";
for (int x : v) {
    cout << x << " ";
}
cout << endl;

// Remove last element
v.pop_back();

cout << "After pop_back: ";
for (int x : v) {
    cout << x << " ";
}
cout << endl;

// Check empty
cout << "Is empty: " << v.empty() << endl;

// Vector initialization
vector<int> filledVector(5, 100);

cout << "Filled vector: ";
for (int x : filledVector) {
    cout << x << " ";
}
cout << endl;

// Vector of pairs
vector<pair<int, int>> coordinates;
coordinates.emplace_back(1, 2);
coordinates.push_back({3, 4});

cout << "Coordinates:" << endl;
for (auto point : coordinates) {
    cout << point.first << " " << point.second << endl;
}

// Clear vector
v.clear();
cout << "After clear, is empty: " << v.empty() << endl;
 

}

int main() {
vectors();
return 0;
}
