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

//https://codeforces.com/contest/702/problem/C

int main(){

	int dist[100000];
	for(int i=0; i<100000; i++){
		dist[i] = 2 * 1e9;
	}

	int n, m;
	cin >> n >> m;

	std::vector<int> citi(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> citi[i];
	}
	std::vector<int> tow(m);
	for (int i = 0; i < m; ++i)
	{
		cin >> tow[i];
	}

	int ptr = 0;
	for (int i = 0; i < n; ++i)
	{
		while(ptr<(m-1) && tow[ptr+1] <= citi[i]){
			ptr++;
		}
		dist[i] = min(dist[i], abs(citi[i] - tow[ptr]));
	}

	ptr = m-1;
	for (int i=n-1; i>=0; --i)
	{
		while(ptr>0 && tow[ptr-1]>=citi[i]){
			ptr--;
		}
		dist[i] = min(dist[i], abs(citi[i] - tow[ptr]));
	}

	int res = 0;
	for (int i = 0; i < n; ++i)
	{
		res = max(res, dist[i]);
	}
	cout << res << "\n";
}	
//haze_12

