#include<bits/stdc++.h>
 
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vi vector<int>
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//https://cses.fi/problemset/task/1074
 
int main(){

    int n;
    cin >> n;
    std::vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(all(v));

    int med = v[n/2];
    int res = 0;
    for (int i = 0; i < n; ++i)
    {
        res += abs(med - v[i]);
    }

    cout << res << "\n";
}
//haze_12