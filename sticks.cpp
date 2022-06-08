//阿努拉格 那罗延天
//....................AUTHOR:-RONALDO
// DISCLAIMER:DON'T COPY THE CODE!!!!
// Computers are fast; programmers keep it slow

// Pragmas
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
using namespace std;

#define setbits(x) __builtin_popcount(x) /// No of set bits
#define tzrobits(x) __builtin_ctz(x)     /// Trailing zeros
#define lzrobits(x) __builtin_clz(x)     /// Leading zeros
#define len(x) (int)(x).size()
#define pb emplace_back
#define all(x) x.begin(), x.end()
#define int long long int
#define rep(x, start, end) for (auto x = (start) - ((start) > (end)); x != (end) - ((start) > (end)); ((start) < (end) ? x++ : x--))
#define cint(n) \
    int n;      \
    cin >> n;
#define mp make_pair
#define pii pair<int, int>
#define input(v1, n)            \
    for (int i = 0; i < n; i++) \
    {                           \
        cint(x);                \
        v1.emplace_back(x);     \
    }
#define ft first
#define sc second
#define precise(digits) fixed << setprecision(digits)
#define cot(t) \
    cout << t << "\n";

typedef vector<int> vi;
int mod = 1e9 + 7; // 1e9-7
const int inf = 1e18;
const int MX = 1e6 + 1;
const int N = 1000000;
const double PI = acos(-1.0);

// int swap(int &a, int &b)
//{
//     a=a^b;
//     b=a^b;
//     a=a^b;
// }

// Seive of Erathanus
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

// NON DETERMISTIC TEST fermet's test
// bool probablePrimeFormat(int n, int iter = 5)
//{
//    if (n < 4)
//        return (n == 2 || n == 3);
//    for (int i = 0; i < iter; i++)
//    {
//        int a = 2 + rand() % (n - 3);
//        mod = n;
//        if (pow(a, n - 1) != 1)
//            return false;
//    }
//    return true;
//}

// Binary Exponention
// int pow(int a, int b)
//{
//	    int ans=1;
//	    if (b == 0)
//	        return 1;
//	    int x = pow(a, b / 2);
//	    if (b % 2)
//	    {
//	        ans = (x * x) % mod;
//	        ans = (ans * a) % mod;
//	    }
//	    else
//	        ans = (x * x) % mod;
//	    return ans;
// }

// Factorial
// int factorial[N];
// int precompute_factorial()
//{
//     factorial[0] = 1;
//     for (int i = 1; i < N; i++)
//         factorial[i] = (factorial[i - 1] * i) % mod;
// }

// GRAPH
// INPUT
// vi arr[N+1],vis(N+1,0),dis(N+1,0);
// void graph_input(int n, int m)
//{
//   while (m--)
//   {
//      cint(a);
//       cint(b);
//       arr[a].pb(b);
//       arr[b].pb(a);
//   }
//}

// DFS
// void dfs(int v)
//{
//    vis[v] = 1;
//  cout << v << "->";
//   for (int child : arr[v])
//   {
//      if (vis[child] == 0)
//          dfs(child);
//   }
//}

// SSSP(Shortest Single Source Path)
// void dfs_distance(int node, int d)
//{
//    vis[node] = 1;
//    dis[node] = d;
//    for (int child : arr[node])
//        if (vis[child] == 0)
//            dfs_distance(child, dis[node] + 1);
//}

// Eucledian
// int gcd(int a, int b)
//{
//     if (b == 0)
//         return a;
//     else
//         return gcd(b, a % b);
// }

// Extended Euclidean
// int exgcd(int a, int b, int &x, int &y)
//{
//    if (b == 0)
//    {
//        x = 1;
//        y = 0;
//        return a;
//    }
//    int x1, y1;
//    int d = exgcd(b, a % b, x1, y1);
//    x = y1;
//    y = x1 - y1 * (a / b);
//    return d;
//}

void soln()
{
    cint(len1);
    vi v1;
    input(v1, len1);
    int ele;
    sort(all(v1));
    if (len1 & 1)
        ele = v1[len1 / 2];
    else
        ele = (v1[len1 / 2 - 1] + v1[len1 / 2]) / 2;
    int sum = 0;
    for (int i = 0; i < len1; i++)
        sum += abs(v1[i] - ele);
    cout << sum;
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
    // int p=1;
    auto start = chrono::system_clock::now();
    {
        while (tt--)
        {
            // cout<<"Case #"<<p<<": ";
            soln();
            // p++;
        }
    }
    auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
    // cout << "Time taken: " << elapsed.count() << " sec";
    return 0;
}
// Remember that there is no code faster than no code.