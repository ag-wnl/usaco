#include<bits/stdc++.h>

using namespace std;

#define pb push_back
const int MAXN = 100005;

//https://cses.fi/problemset/task/1682

std::vector<int> adj[MAXN][2];
bool vis[MAXN];

void dfs(int v, int x){
    vis[v] = true;
    for(int i : adj[v][x]){
        if(!vis[i]){
            dfs(i,x);
        }
    }
}
 
void solve(){
    int n,m;
    cin >> n >> m;
    for(int i=0; i<m; i++){
        int u,v; cin >> u >> v;
        u--, v--; //for 0 indexing
        adj[u][0].pb(v); //from
        adj[v][1].pb(u); //to
    }

    dfs(0,0);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            cout << "NO" << "\n";
            cout << 1 << " " << i+1 << "\n";
            return;
        }
    }
    memset(vis,false, sizeof(vis));
    dfs(0,1);
    for(int i=0; i<n; i++){
        if(!vis[i]){
            cout << "NO" << "\n";
            cout << i+1 << " " << 1 << "\n";
            return;
        }
    }

    cout << "YES" << "\n";
}
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr);
    int T=1;
    // cin >> T;
    while(T--) solve();
}
//haze_12