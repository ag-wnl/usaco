#include<bits/stdc++.h>
 
using namespace std;

//https://cses.fi/problemset/task/1652
//this problem was fun

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

//as given n can be upto 1000
int treepref[1000+1][1000+1];
int forest[1000+1][1000+1];

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<char>> v(n, vector<char>(n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char x; cin >> x;
            forest[i+1][j+1] += (x == '*'); //if * then enters 1 or else 0; so if tree then 1 or else 0(empty)
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            treepref[i][j] = forest[i][j] + treepref[i-1][j] + treepref[i][j-1] - treepref[i-1][j-1];
        }
    }

    for(int i=0; i<q; i++){
        int y1,x1,y2,x2;
        cin >> y1 >> x1 >> y2 >> x2;
        cout << treepref[y2][x2] - treepref[y1-1][x2] - treepref[y2][x1-1] + treepref[y1-1][x1-1] << "\n";
    }

}
//haze_12

