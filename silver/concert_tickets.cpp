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

//https://cses.fi/problemset/task/1091

int main(){
	
	int n, m;
	cin >> n >> m;
	multiset<int> s;
	for (int i = 0; i < n; ++i)
	{
		int x; cin >> x;
		s.insert(x);
	}

	for (int i = 0; i < m; ++i)
	{
		int p; cin >> p;
		auto it = s.upper_bound(p);
		if(it == s.begin()){
			cout << -1 << "\n";
		}else{
			cout << *(--it) << "\n";
			s.erase(it);
		}
	}

}
//haze_12

