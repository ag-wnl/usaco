#include <bits/stdc++.h>
using namespace std;
 
#define ff first
#define ss second
#define ll long long
#define zerobits(x) __builtin_ctzll(x)
#define setbits(x) __builtin_popcountll(x)
#define invectr(x)     \
    for (auto &i : x) \
        cin >> i;
const int MAXN = 200200;

//https://codeforces.com/gym/102951/problem/A

int main(){
    int n;
    cin >> n;
    int maxi = -1e9;
    vector<int> x(n), y(n);
    invectr(x);
    invectr(y);
    for(int i = 0; i < n; i++){
    	for(int j = i + 1; j < n; j++){
    		int dx = abs(x[j] - x[i]);
    		int dy = abs(y[j] - y[i]);
    		maxi = max(maxi, dx*dx + dy*dy);
    	}
    }
    cout << maxi << "\n";

}

//haze_12
