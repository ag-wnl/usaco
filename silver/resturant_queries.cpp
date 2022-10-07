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


//https://cses.fi/problemset/task/1619

int main(){
	ios_base::sync_with_stdio(false), cin.tie(nullptr);
	
	int n;
	cin >> n;
	vector<pair<int,int>> v;
	for(int i=0; i<n; i++){
		int l,r;
		cin >> l >> r;
		v.push_back({l, 1});
		v.push_back({r,-1});
	}
	sort(all(v));

	int cur = 0, maxi = -1e9;
	for(auto & x : v){
		cur += x.ss; //prefix sum in a way
		maxi = max(maxi, cur);
	}
	cout << maxi << "\n";
}
//haze_12