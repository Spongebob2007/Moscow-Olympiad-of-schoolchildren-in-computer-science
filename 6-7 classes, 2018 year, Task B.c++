// Разобрать код и считывание данных
#include <iostream>

using namespace std;

typedef long long int ll;

int main()
{
    ll a,b,c,t,d;
    cin>>a>>b>>c>>t>>d;
	d--;
	ll x = 1;
	while (x % a != 0 || x % b != 0 || x % c != 0) {
		x++;
	}
	
	a = x - 1;
	ll first = (t * d + a) / (a + 1);
	ll last = (t * (d + 1) + a) / (a + 1);
	cout << last - first;
    return 0;
}


