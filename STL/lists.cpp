#include<bits/stdc++.h>
using namespace std;

void lists()
{
    list<string> playlist;
    playlist.push_back("song A");
    playlist.push_back("song B");

    playlist.push_front("Intro song");

    auto it=playlist.begin();
    advance(it,2);
    playlist.insert(it,"song C");

    playlist.remove("song B");

    for(auto p:playlist)
    {
        cout<<p<<endl;
    }

  cout<<"Total songs:"<<playlist.size();
    
}

int main()
{
    lists();
    return 0;
}