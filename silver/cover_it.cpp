#include<bits/stdc++.h>
 
using namespace std;
//https://codeforces.com/contest/1176/problem/E

#define pb push_back
const int MAXN = 2e5 + 5;

int n,m, vis[MAXN];
std::vector<int> adj[MAXN];

void  dfs(int u){
    vis[u] = 0;
    for(int x : adj[u]){
        if(~vis[x]){
            continue;
        }
        dfs(x);
        if(!vis[x]){
            vis[u] = 1;  
        }
    }
}

 
void solve(){
    cin >> n >> m;
    for(int i=0,u,v; i<m; i++){
        cin >> u >> v;
        u--, v--;
        adj[u].pb(v), adj[v].pb(u);
    }
    memset(vis,-1, 4*n);
    dfs(0);
    int tot = 0;
    for(int i=0; i<n; i++){

        tot += vis[i];
    }
    cout << tot << "\n";
    for(int i=0; i < n; i++){
        if(vis[i]) cout << i+1 << " ";
    }
    cout << "\n";

    for(int i=0; i<n; i++){
        adj[i].clear();
    }
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--) solve();
}
//haze_12