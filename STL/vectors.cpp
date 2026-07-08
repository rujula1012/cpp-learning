#include<bits/stdc++.h>
using namespace std;

void vectors()
{
    vector<int> v1;
    vector <pair<int,int>>vec;
    v1.push_back(1);
    vec.emplace_back(1,2);
    vec.push_back({2,4});

    for (int x: v1)
    {
        cout<<x<<" ";
    }
    cout<<endl;

    for (auto p:vec)
    {
        cout<<p.first<<" "<<p.second<<endl;
    }
}

int main()
{
    vectors();
}
