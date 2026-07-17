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
    
    int x;
    cout<<"Enter the roll no. to search"<<endl;
    cin>>x;
    auto it =st.find(x);

    if(it!=st.end()) cout<<"student found:"<<it->second<<endl;
    else cout<<"student not found!\n";

    cout<<"Enter the student roll no. to update:"<<endl;
    cin>>x;

    if(st.find(x)!=st.end())
    {
        string newname;
        cout<<"Enter the new name:"<<endl;
        cin>>newname;

        st[x]=newname;
        cout<<"updated record!"<<endl;
    }

    else{
        cout<<"student not found!\n";
    }
    cout << "Student Records:\n";
    for (auto p : st)
    {
        cout << p.first << " -> " << p.second << endl;
    }
cout<<"Enter the student roll no. to delete:"<<endl;
    cin>>x;

    if(st.erase(x))
    cout<<"Record deleted"<<endl;
    else
    cout<<"Student not found!"<<endl;

     cout << "Student Records:\n";
    for (auto p : st)
    {
        cout << p.first << " -> " << p.second << endl;
    }
}


int main()
{   
    int n;
    cout<<"Enter the number of students:"<<endl;
    cin>>n;
    maps(n);
}