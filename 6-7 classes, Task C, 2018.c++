#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto& it : v)
        cin >> it;
    sort(v.rbegin(), v.rend());
    for(int i = v.size(); 0 < i; i--)
    {
       if(i % 2 != 0)
       {
           if(v[i] == 0)
           {
               continue;
           }
           cout<<v[i]<<" ";
       }
    }
    for(int i = 0; i < v.size(); i++)
    {
        if(i % 2 == 0)
        {
            cout<<v[i]<<" ";
        }
    }
    
}
