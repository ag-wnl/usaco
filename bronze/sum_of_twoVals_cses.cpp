#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define all(x) (x).begin(), (x).end()
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;


int main(){
    int n,x;
    cin >> n >> x;
    int a[n];
    map<int,int> vals;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(vals.count(x-a[i])){   //if map has that key
            cout<< vals[x-a[i]] <<" "<< i + 1 << "\n";
            return 0;
        }
        vals[a[i]] = i + 1; //1 based indexing
    }
    cout<< "IMPOSSIBLE" << "\n";
}

//haze_12