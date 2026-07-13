#include<bits/stdc++.h>
using namespace std;

void maps(int n)
{
 map<int,string>st;

cout<<"Enter the roll no and name"<<endl;
for (int i = 0; i < n; i++)
    {
        int roll;
        string name;

        cin >> roll >> name;
        st[roll] = name;
    }

    cout << "Student Records:\n";
    for (auto p : st)
    {
        cout << p.first << " -> " << p.second << endl;
    }

    cout<<"total students:"<<st.size()<<endl;
}


int main()
{   
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    maps(n);
}