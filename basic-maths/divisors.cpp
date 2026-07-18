#include<bits/stdc++.h>
using namespace std;

vector<int> print_divisors(int n)
{  
   vector<int> divisor;
   for(int i=1;i*i<=n;i++)
   {
    if(n%i==0)
    { 
        divisor.push_back(i);

        if((n/i)!=i)
        divisor.push_back(n/i);
    }
   }
   sort(divisor.begin(),divisor.end());
   return divisor;
}

int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    vector<int> v=print_divisors(n);
    cout<<"[";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
        if(i!=v.size()-1)
        cout<<",";
    
    }
    cout<<"]";
    return 0;
}
