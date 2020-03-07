#include <vector>
#include <bits/stdc++.h>
#include <string>

using namespace std;

typedef long long int ll;

string multiplication(string &v1, string &v2)
{
    string d = "";
    for(int s = 0; s < v1.length(); s++)
    {
        d += v1 + v2[s];
    }
    return d;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,chet = 0;
    string vec1,res;
    cin >> n >> m;
    vector<string>v(n);
    vector<int>v1(n);
    vector<int>v2(m);
    for(auto&it:v)
        cin>>it;
    for(int i = 0; i < n; i++)
    {
        for(int il = 0 ; il < m-1; il++)
        {
            if(v[i][il] != v[i][il+1])
            {
                cout<<"NO";
                return 0;
            }
        }
    }
    
    cout<<"YES";
    
   // cout<<chet;
}
