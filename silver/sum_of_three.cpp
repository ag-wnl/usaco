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

//https://cses.fi/problemset/task/164

int main(){
	int n, x;
	cin >> n >> x;
	std::vector<pair<int, int>> v;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		v.pb({x,i});
	}

	sort(all(v));
	for (int i = 0; i < n; ++i)
	{
		int l=0, r = n-1;
		while(l < r){
			int tar = x - v[i].ff;
			if(l!=i && r!=i && v[l].ff + v[r].ff == tar){
				cout << v[i].ss + 1 << " " << v[l].ss + 1 << " " << v[r].ss + 1 << "\n";
				return 0;
			} 
			if(v[l].ff + v[r].ff < tar){
				l++;
			}else{
				r--;
			}
		}
	}
	cout << -1 << "\n";

}	
//haze_12

