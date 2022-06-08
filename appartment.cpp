#include <bits/stdc++.h>
using namespace std;
#define setbits(x) __builtin_popcount(x) /// No of set bits
#define tzrobits(x) __builtin_ctz(x)     /// Trailing zeros
#define lzrobits(x) __builtin_clz(x)     /// Leading zeros
#define len(x) (int)(x).size()
#define vi vector<int>
#define cint(n) \
    int n;      \
    cin >> n;
#define input(v1, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cint(x);                \
        v1.emplace_back(x);     \
    }
#define precise(digits) fixed << setprecision(digits)
#define int long long int
#define cot(t) \
    cout << t << "\n";
const int mod = 1e9 + 7;
const int inf = 1e18;
const int MX = 1e6 + 1;
const int N = 1000000;
const double PI = 3.141592653589793238;
// int abs(int sizeapli, int sizeappart)
// {
//     if (sizeapli > sizeappart)
//         return sizeapli - sizeappart;
//     else
//         return sizeappart - sizeapli;
// }
// int swap(int &sizeapli, int &sizeappart)
//{
//     sizeapli=sizeapli^sizeappart;
//     sizeappart=sizeapli^sizeappart;
//     sizeapli=sizeapli^sizeappart;
// }
// bool sieve[N + 1];
// void createSieve()
//{
//    for (int i = 2; i < N + 1; i++)
//        sieve[i] = true;
//    for (int i = 2; i * i <= N; i++)
//        if (sieve[i] == true)
//            for (int j = i * i; j <= N; j += i)
//                 sieve[j] = false;
// }
// int pow(int sizeapli, int sizeappart)
//{
//	int ans = 1;
//	while (sizeappart)
//	{
//	    if (sizeappart & 1)
//	        ans *= sizeapli;
//	    sizeappart = sizeappart >> 1;
//	    sizeapli *= sizeapli;
//	}
//	return ans;
// }
// int factorial[N];
// int precompute_factorial()
//{
//     factorial[0] = 1;
//     for (int i = 1; i < N; i++)
//         factorial[i] = (factorial[i - 1] * i) % mod;
// }
// int gcd(int sizeapli, int sizeappart)
//{
//     if (sizeappart == 0)
//         return sizeapli;
//     else
//         return gcd(sizeappart, sizeapli % sizeappart);
// }
void soln()
{
    cint(n);
    cint(m);
    cint(k);
    vi sizeapli, sizeappart;
    input(sizeapli, n);
    input(sizeappart, m);
    sort(sizeappart.begin(), sizeappart.end());
    sort(sizeapli.begin(), sizeapli.end());
    int i = 0, j = 0, ans = 0;
    while (i < n && j < m)
    {
        if (abs(sizeapli[i] - sizeappart[j]) <= k)
        {
            ++i;
            ++j;
            ++ans;
        }
        else
        {
            if (sizeapli[i] - sizeappart[j] > k)
                ++j;

            else
                ++i;
        }
    }
    cout << ans;
    cout << '\n';
}
signed main()
{
    int tt;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //#ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // freopen("error.txt", "w", stderr);
    //#endif
    tt = 1;
    // cin>>tt;
    auto start = chrono::system_clock::now();
    {
        while (tt--)
        {
            soln();
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
    // cout << "Time taken: " << elapsed.count() << " sec";
    return 0;
}