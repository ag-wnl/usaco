#include<bits/stdc++.h>
 
using namespace std;

//http://www.usaco.org/index.php?page=viewproblem2&cpid=572
 
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

 
void solve(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> v(n+1, vector<int>(3,0));

    for(int i=1; i<=n; i++){
        int x; 
        cin >> x;
        v[i][0] = v[i-1][0] + (x == 1);
        v[i][1] = v[i-1][1] + (x == 2);
        v[i][2] = v[i-1][2] + (x == 3);
    }

    for(int i=0; i<q; i++){
        int a,b;
        cin >> a >> b;
        cout << v[b][0] - v[a-1][0] << " " << v[b][1] - v[a-1][1] << " " << v[b][2] - v[a-1][2] << "\n";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    T=1;
    while(T--) solve();
}
//haze_12