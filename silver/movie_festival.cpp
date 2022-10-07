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


 
int main(){

    int n;
    cin >> n;
    std::vector<pair<int,int>> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i].ff >> v[i].ss;
    }

    sort(all(v));
    int res = 0;
    int last = 0;
    for (int i = 0; i < n; ++i)
    {
        if(i>0) last += v[i-1].ff;
        res+= v[i].ss - (v[i].ff + last);
    }

    cout << res << "\n";

}
//haze_12