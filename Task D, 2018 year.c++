#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long int ll;

string multiplication(string v1, string v2)
{
    string d;
    for(int s = 0; s < v1.length(); s++)
    {
        d = v1 + v2[s];
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string d;
    int n;
    cin >> n;
    vector<string>v(n);
    for(auto&it:v)
        cin>>it;
    string s = v[0];
    string t = v[1];
    cout<<t;
    cout<<s;
    int z = multiplication(s, t);
    cout<<z;
}
