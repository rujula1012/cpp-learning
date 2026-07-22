#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements to input:" << endl;
    cin>>n;
    int a[n];
    cout<<"Input in array\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //precompute
  int hash[13]={0};
  for(int i=0;i<n;i++)
  {
   hash[a[i]]+=1;
  }

    int q;
    cout<<"Enter the number of queries:"<<endl;
    cin>>q;

    while(q--)
    {
        int number;
        cin>>number;

        cout<<"the number of times "<<number<<" appears:"<<hash[number]<<endl;
    }

string s;
cout<<"Enter the string:\n";
cin>>s;
//precompute
int hash[256]={0};
for(int i =0;i<s.size();i++)
{
    hash[s[i]]++;
}
// fetch
int q;
cin>>q;
while(q--)
{
char c;
cin>>c;
cout<<hash[c]<<endl;

}
return 0;

}