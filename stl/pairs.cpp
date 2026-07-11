#include<iostream>
using namespace std;

void pairs()
{
    pair<int,int> p={1,3};
    cout<<p.first<<","<<p.second<<endl;

    pair<int,pair<int,float>> p2={1,{2,4.5}};
    cout<<p2.first<<","<<p2.second.first<<","<<p2.second.second<<endl;

    pair<int,int>arr[]={{1,2},{2,3},{3,4}};
    cout<<arr[0].first<<endl;
}

int main()
{
    pairs();
}