// Разобрать код и считывание данных

#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <iomanip>
#include <bitset>

#pragma comment(linker, "/STACK:256000000")

using namespace std;

typedef long long int ll;
typedef long double ld;

const int INF = 1000 * 1000 * 1000 + 21;
const ll LLINF = (1ll << 60) + 5;
const int MOD = 1000 * 1000 * 1000 + 7;

ll n, k, a, b;

int main()
{
    scanf("%lld%lld%lld%lld", &n, &k, &a, &b);
    if (k == 1) return 0 * printf("%lld\n", (n - 1) * a);

    ll ans = 0;
    while (n != 1)
    {
        if (n < k)
        {
            ans += (n - 1) * a;
            n = 1;
        }
        else if (n % k != 0)
        {
            ans += (n % k) * a;
            n -= n % k;
        }
        else if (b <= (n - n / k) * a)
        {
            ans += b;
            n /= k;
        }
        else
        {
            ans += a;
            --n;
        }
    }

    printf("%lld\n", ans);

    return 0;
}
